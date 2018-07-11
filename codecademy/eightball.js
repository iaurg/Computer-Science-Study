let userName = prompt("What's your name?");
let question = prompt("What you want to know?");
let randomNumber = Math.floor(Math.random() * 7);

switch(randomNumber){
	case 0:
    eigthBall = 'It is certain';
    break;
  case 1:
    eightBall = 'It is decidedly so';
    break;
  case 2:
    eightBall = 'Reply hazy try again';
    break;
  case 3:
    eightBall = 'Cannot predict now';
    break;
  case 4:
    eightBall = 'Dont count on it';
    break;
  case 5:
    eightBall = 'My sources say no';
    break;
  case 6:
    eightBall = 'Outlook not so good';
    break;
  case 7:
    eightBall = 'Signs point to yes';
    break;
	default:
		eightBall = "Not today?!"
	break;
}

alert('Your question: ' + question); 
alert('The eight ball answer: ' + eightBall);
