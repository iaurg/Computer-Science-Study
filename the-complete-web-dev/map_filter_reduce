//https://sdras.github.io/array-explorer
const array = [1,2,3,4];

//Map

const mapx = array.map((num) =>{
  return num * 3;
})

const mapClean = array.map(num => num * 4);

console.log(mapClean);

//Filter

const filtra = array.filter(num => num > 2 && num < 4);

const filtraFiltro = filtra.filter(num => num > 3);

console.log(filtra);
console.log(filtraFitlro);

//Reduce

const redus = array.reduce((acc, num) => {
  return acc + num;
},0);

console.log(redus); 


//Exercise

// Complete the below questions using this array:
const array = [
  {
    username: "john",
    team: "red",
    score: 5,
    items: ["ball", "book", "pen"]
  },
  {
    username: "becky",
    team: "blue",
    score: 10,
    items: ["tape", "backpack", "pen"]
  },
  {
    username: "susy",
    team: "red",
    score: 55,
    items: ["ball", "eraser", "pen"]
  },
  {
    username: "tyson",
    team: "green",
    score: 1,
    items: ["book", "pen"]
  },

];

//Create an array using forEach that has all the usernames with a "!" to each of the usernames
const resultado = [];

const withCh = array.forEach((nome) => {
  resultado.push(nome.username + "!");
});

console.log(resultado);

//Create an array using map that has all the usernames with a "? to each of the usernames
const namesCh = array.map((nome2) =>{
  return nome2.username + "?";
});
console.log(namesCh)

//Filter the array to only include users who are on team: red
const filtraRed = array.filter((reds) =>{
  return reds.team === "red";
});

console.log(filtraRed);

//Find out the total score of all users using reduce
const pontos = array.reduce((acc, points) => {
  return acc + points.score;
}, 0);

console.log(pontos)

// (1), what is the value of i?
//The index of array
// (2), Make this map function pure:
const arrayNum = [1, 2, 4, 5, 8, 9];

const newArray = arrayNum.map(num => num * 2);


//BONUS: create a new list with all user information, but add "!" to the end of each items they own.
const answer = array.map(user => {
	user.items = user.items.map(item => {
		return item + "!"
	});
	return user;
})
console.log(answer);
