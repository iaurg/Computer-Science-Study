# Flask

Connect Server Side with Client Side

Web Server constantly listen to an port

HTTP request tells to server what do you want

Framework is a way ofdoing thing, organize your code and so on...

MVC = Model, View, Controller

Simple http server in Flask

```python
from flask import Flask
app = Flask(__name__)

@app.route('/')
def hello_world():
    return 'Hello, World!'
```

Listen users then responds

Decoratos (@) inside backend code associate some functions to next function

Web frameworks usually allow templates

Do baby steps when programming

Never ever trust user inputs

Programm defensively

Never type sensitive information directly into your code, use environment variables

session = remember something about you 

cookie = piece of data placed on your device used to remember who you are

be carefull with cookie hijack

sessions = stamps on your hand, identifies you

Flask allow python to implement a web app using backend writen in Python

Your web server can do different things based on type of HTTP request

AJAX = Asynchronous JavaScript and XML

Ajax allow us to dinamycally update a webpage, this use a special JS object called XMLHttpRequest

Example pure JS function doing a AJAX request:
```js
function ajax_request(argument){
  var aj = new XMLHttpRequest();

  aj.onreadystatechange = function () {
    if (aj.readtState == 4 && aj.status == 200){
      // do something to the page
    }
  }

  aj.open("GET", /* URL */, true);
  aj.send();
}
```

More commonly, you'll see Ajax written with Jquery https://api.jquery.com/jquery.ajax/