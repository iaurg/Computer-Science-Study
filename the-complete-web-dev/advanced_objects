class Player{
  constructor(name, type){
    this.name = name;
    this.type = type;
  }

  bemvindo(){
    console.log(`Olá ${this.name}, ví que você é um ${this.type}`);
  }
}

class Wizard extends Player{
  constructor(name, type){
    super(name, type);
  }
  play(){
    console.log(`Weee i'm a ${this.type}`);
  }
}

const italo = new Player("Italo", "Troll");
italo.bemvindo();

const magitalo = new Wizard("Italo", "Mago");

magitalo.bemvindo();


//#3 create two classes: an Animal class and a Mamal class. 
// create a cow that accepts a name, type and color and has a sound method that moo's her name, type and color. 

class Animal{
  constructor(name, type, color){
    this.name = name;
    this.color = color;
    this.type = type;
  }  
}

class Mamal extends Animal{
  constructor(name, type, color){
    super(name, type, color);
  }
  sound(){
    console.log(`Moooooo, my name is ${this.name}, my type is ${this.type} and my color is ${this.color}`);
  }
}


const vaquinha = new Mamal("Mimosa", "vaca", "Branca");
vaquinha.sound();
