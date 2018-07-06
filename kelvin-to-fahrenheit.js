const hi = confirm("Lets convert?");
const kelvin = prompt("What is Kelvin temperature? I convert to Farehnheit for you");
let conversion = kelvin * 9/5 - 459.67;
let round = Math.floor(conversion);
console.log(`The exact temperature in Farehnheit is ${conversion} or rounded to ${round}`);
