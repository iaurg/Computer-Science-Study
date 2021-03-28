import os

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from tempfile import mkdtemp
from datetime import datetime
from werkzeug.exceptions import default_exceptions, HTTPException, InternalServerError
from werkzeug.security import check_password_hash, generate_password_hash

from helpers import apology, login_required, lookup, usd

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True


# Ensure responses aren't cached
@app.after_request
def after_request(response):
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


# Custom filter
app.jinja_env.filters["usd"] = usd

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_FILE_DIR"] = mkdtemp()
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///finance.db")

# Make sure API key is set
if not os.environ.get("API_KEY"):
    raise RuntimeError("API_KEY not set")


@app.route("/")
@login_required
def index():
    """Show portfolio of stocks"""
    userId = session["user_id"]
    userStocks = db.execute("SELECT * FROM portfolio WHERE user_id = ? GROUP BY stock;", userId)
    actualCash = db.execute("SELECT cash FROM users WHERE id = ?", userId)[0]["cash"]

    for item in userStocks:
        lookupValues = lookup(item['stock'])
        stockPrice = lookupValues["price"]
        stockName = lookupValues["name"]
        item['actualPrice'] = stockPrice
        item['name'] = stockName
    return render_template("index.html", actualCash=actualCash, userStocks=userStocks)


@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    """Buy shares of stock"""
    if request.method == "POST":
        symbol = request.form.get("symbol")

        if not request.form.get("shares").isdigit() or int(request.form.get("shares")) < 1:
            return apology("Invalid share value")

        shares = int(request.form.get("shares"))

        if not symbol:
            return apology("Provide a symbol value")

        if not shares:
            return apology("Invalid shares")

        lookupValues = lookup(symbol)

        if not lookupValues:
            return apology("Invalid Symbol")

        userId = session["user_id"]
        stockPrice = lookupValues["price"]
        stockSymbol = lookupValues["symbol"]
        userCash = db.execute("SELECT cash FROM users WHERE id = ?", userId)[0]["cash"]
        wantToBuyValue = shares * stockPrice

        if wantToBuyValue > userCash:
            return apology("Not enough cash :c")
        else:
            updateCash = format(userCash - wantToBuyValue, '.2f')
            dateTime = datetime.now()
            db.execute("UPDATE users SET cash=? WHERE id=?", updateCash, userId)
            db.execute("INSERT INTO transactions (user_id, stock, price, shares, datetime, operation) VALUES(?,?,?,?,?,'BUY')",
                    userId, stockSymbol, stockPrice, shares, dateTime)

            actualPorfolio = db.execute("SELECT stock FROM portfolio WHERE user_id=? AND stock = ?", userId, stockSymbol)

            if not actualPorfolio:
                db.execute("INSERT INTO portfolio (stock, shares, user_id) VALUES(?,?,?)", stockSymbol, shares, userId)
            else:
                db.execute("UPDATE portfolio SET shares=shares + ? WHERE user_id=? AND stock = ?", shares, userId, stockSymbol)
            return redirect("/")
    if request.method == "GET":
        return render_template("buy.html")


@app.route("/history")
@login_required
def history():
    """Show history of transactions"""
    userId = session["user_id"]
    transactions = db.execute("SELECT * FROM transactions WHERE user_id=?", userId)
    return render_template("history.html", transactions=transactions)


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":

        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for username
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(rows[0]["hash"], request.form.get("password")):
            return apology("invalid username and/or password", 403)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    """Get stock quote."""
    if request.method == "POST":
        symbol = request.form.get("symbol")

        if not symbol:
            return apology("must provide symbol", 400)

        symbolValues = lookup(symbol)

        if not symbolValues:
            return apology("Invalid Symbol")

        return render_template("/quoted.html", symbolValues=symbolValues)

    if request.method == "GET":
        return render_template("/quote.html")

    return apology("Nothing here, try again", 404)


@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""
    if request.method == "POST":
        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 400)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 400)

        # Ensure password and confirmation are equal
        elif request.form.get("password") != request.form.get("confirmation"):
            return apology("password not match", 400)

        username = request.form.get("username")

        hasUser = db.execute("SELECT username FROM users WHERE username=?", username)
        if not hasUser:
            inputPassword = request.form.get("password")
            hashedPass = generate_password_hash(inputPassword, method='pbkdf2:sha256', salt_length=8)
            db.execute("INSERT INTO users (username, hash) VALUES (?,?)", username, hashedPass)
        else:
            return apology("user already exists", 400)

        return redirect("/login")
    else:
        return render_template("register.html")


@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    userStocks = db.execute("SELECT * FROM portfolio WHERE user_id = ? GROUP BY stock;", session["user_id"])
    """Sell shares of stock"""
    if request.method == "POST":
        selectedStock = request.form.get("symbol")
        selectedShares = int(request.form.get("shares"))
        userId = session["user_id"]

        if not selectedStock:
            return apology("must select stock", 406)

        # Ensure password was submitted
        if not selectedShares or selectedShares < 1:
            return apology("must provide valid shares value", 400)

        stocksArray = []
        for item in userStocks:
            stocksArray.append(item["stock"])

        if selectedStock not in stocksArray:
            return apology("must provide valid shares", 400)

        for item in userStocks:
            if selectedStock == item['stock'] and selectedShares > item['shares']:
                return apology("You can't sell more than you have", 400)

        userCash = db.execute("SELECT cash FROM users WHERE id = ?", userId)[0]["cash"]

        # Stock from helper
        lookupValues = lookup(selectedStock)
        stockPrice = lookupValues["price"]
        stockSymbol = lookupValues["symbol"]

        updateCash = format(userCash + stockPrice * selectedShares, '.2f')
        dateTime = datetime.now()

        # Update data
        db.execute("UPDATE users SET cash=? WHERE id=?", updateCash, userId)
        db.execute("INSERT INTO transactions (user_id, stock, price, shares, datetime, operation) VALUES(?,?,?,?,?,'SELL')",
                userId, stockSymbol, stockPrice, selectedShares, dateTime)

        actualPorfolio = db.execute("SELECT * FROM portfolio WHERE user_id=? AND stock = ?", userId, stockSymbol)
        updateShares = actualPorfolio[0]["shares"] - selectedShares

        if updateShares == 0:
            db.execute("DELETE FROM portfolio WHERE user_id=? AND stock = ?", userId, stockSymbol)
        else:
            db.execute("UPDATE portfolio SET shares=? WHERE user_id=? AND stock = ?", updateShares, userId, stockSymbol)

        return redirect("/")
    else:
        return render_template("sell.html", userStocks=userStocks)


def errorhandler(e):
    """Handle error"""
    if not isinstance(e, HTTPException):
        e = InternalServerError()
    return apology(e.name, e.code)


# Listen for errors
for code in default_exceptions:
    app.errorhandler(code)(errorhandler)
