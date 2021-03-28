import os

from cs50 import SQL
from flask import Flask, flash, jsonify, redirect, render_template, request, session

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Configure CS50 Library to use SQLite database
# birthdays table: id, name, month, and day
db = SQL("sqlite:///birthdays.db")

@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":
        name = request.form["name"]
        month = request.form["month"]
        day = request.form["day"]
        # TODO: Add the user's entry into the database
        if not name or not month or not day:
            print("Fields Error")
            return redirect("/")
        db.execute("INSERT INTO birthdays (name, month,day) VALUES (?, ?, ?)", name, month, day)
        print(name, month, day)
        return redirect("/")

    else:
        # TODO: Display the entries in the database on index.html
        rows = db.execute("SELECT name, day, month FROM birthdays")
        return render_template("index.html", birthdays = rows)


