//Evaluate these:
//#1
[2] === [2]
//false
{} === {}
//false

//#2 what is the value of property a for each object.
const object1 = { a: 5 }; //5
const object2 = object1; //5
const object3 = object2; //false
const object4 = { a: 5}; //true
object1.a = 4; //4


//#3 create two classes: an Animal class and a Mamal class.
// create a cow that accepts a name, type and color and has a sound method that moo's her name, type and color.

class Animal{
  constructor(name, type, color){
    this.name = name;
    this.type = type;
    this.color = color;
  }
}

class Mamal extends Animal{
  constructor (name, type, color){
    super(name, type, color)
  }
  sound(){
    console.log(`Hi my moo name is ${this.name} my type is ${this.type} and my color is ${this.color} `);
  }
}

const cow1 = new Mamal("Vacow", "vacaloka", "Black");
const cow2 = new Mamal("Vacona", "vacabrita", "branca");
