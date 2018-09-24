
// For all of these, what is the value of a when the function gets called with the alert()
// #1
function q1() {
    var a = 5;
    if(a > 1) {
        a = 3;
    }
    alert(a); //3
}

//#2
var a = 0;
function q2() {
    a = 5;
}

function q22() {
    alert(a); //5
}


//#3
function q3() {
    window.a = "hello";
}


function q32() {
    alert(a); //hello
}

//#4
var a = 1;
function q4() {
    var a = "test";
    alert(a); //test

//#5
var a = 2;
if (true) {
    var a = 5;
    alert(a); //5
}
alert(a); //5