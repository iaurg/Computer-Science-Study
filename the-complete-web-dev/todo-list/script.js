var button = document.getElementById("enter");
var input = document.getElementById("userinput");
var ul = document.querySelector("ul");
var pegaLi = document.querySelectorAll("ul li");

function inputLength (){
	return input.value.length;
}

function createListElement(){
	var li = document.createElement("li");
	li.className = 'list-group-item d-flex justify-content-between align-items-center';
	var doneCheck = document.createElement("button");
	var deleteBt = document.createElement("button");
	deleteBt.className = 'btn btn-danger';
	doneCheck.className = 'btn btn-success';
	li.appendChild(document.createTextNode(input.value));
	ul.appendChild(li);	
	li.appendChild(deleteBt);
	li.appendChild(doneCheck);
	deleteBt.appendChild(document.createTextNode("Delete Item"));
	doneCheck.appendChild(document.createTextNode("Done"));
	input.value = "";
	doneCheck.addEventListener("click", addDone);
	deleteBt.addEventListener("click", removeLi);
}

function addListAfterClick(){
	if(inputLength() > 0){
		createListElement(); 
	}
}

function addListAfterKeyPress(event){
	if(inputLength() > 0 && event.keyCode === 13){
		createListElement();
	}
}

function addDone(){
	this.parentNode.classList.toggle("list-group-item-success");
}

function removeLi(){
	var confirma = confirm("You really want to delete?");
	if (confirma == true){
		this.parentNode.remove();
	}else{
		false
	}	
}

button.addEventListener("click", addListAfterClick);
input.addEventListener("keypress", addListAfterKeyPress);

