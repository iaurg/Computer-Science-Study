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

const guarda = [];
const exe1 = array.forEach((num) => {
  guarda.push(num.username + "!");
});
console.log(guarda);
//Create an array using map that has all the usernames with a "? to each of the usernames

const arrayMap = array.map((num) => {
    let {username} = num;
    return num.username + "?";
});
console.log(arrayMap);
//Filter the array to only include users who are on team: red

const arrayFilter = array.filter((item) => {
    return item.team === "red";
});
console.log(arrayFilter);
//Find out the total score of all users using reduce

const arrayReduce = array.reduce((p, c) => {
    return  p + c.score;
}, 0);
console.log(arrayReduce);
// (1), what is the value of i?
// 0 similar to i++
// (2), Make this map function pure:
const arrayNum = [1, 2, 4, 5, 8, 9];
const newArray = arrayNum.map((num, i) => {
	return num * 2;
})

//BONUS: create a new list with all user information, but add "!" to the end of each items they own.
const allInfo = array.map((user) => {
    user.items = user.items.map((item) => {
      return item + "!";
    });
    return user;
});

console.log(allInfo);
