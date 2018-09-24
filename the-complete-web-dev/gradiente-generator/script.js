var css = document.querySelector("h3");
var color1 = document.querySelector(".color1");
var color2 = document.querySelector(".color2");
var body = document.getElementById("gradient");
var randomBt = document.querySelector(".randomize");

function colorPicker(){
	body.style.background = "linear-gradient(to right," + color1.value + ", " + color2.value + ")";
	css.textContent = body.style.background + ";";
}

function randomizer(){
	hexR1 = '#' + Math.random().toString(16).slice(2, 8).toUpperCase();
	hexR2 = '#' + Math.random().toString(16).slice(2, 8).toUpperCase();
	body.style.background = "linear-gradient(to right," + hexR1 + ", " + hexR2 + ")";
}

window.onload = colorPicker;
color1.addEventListener("input", colorPicker);
color2.addEventListener("input", colorPicker);
randomBt.addEventListener("click", randomizer);