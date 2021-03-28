/*---- Target DOM Elements ----*/

let divCoins = document.getElementById('selected-coins')
let dropdown = document.getElementById('coins-dropdown');
const formSelectCoin = document.getElementById("select-coin");


/*---- Create and Fill Select Coin Options ----*/
dropdown.length = 0;
let defaultOption = document.createElement('option');
defaultOption.text = 'Choose Coin';

dropdown.add(defaultOption);
dropdown.selectedIndex = 0;

const url = 'https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=gecko_desc&per_page=250';

async function getCoinList(){
  return fetch(url)
  .then(response => {
    if (!response.ok) { throw response }
    return response.json()
  })
  .catch(error => console.log(error))
}

async function populateSelectCoin() {
  const data = await getCoinList();
  if(data){
    let option;
    for (let i = 0; i < data.length; i++) {
      option = document.createElement('option');
      option.text = data[i].name;
      option.value = data[i].id;
      dropdown.add(option);
    } 
  }
}

populateSelectCoin();

/*---- Change and update storage ----*/

function addCoinToStorage(coin){  
  chrome.storage.sync.get(['coins'], function(result) {
    if(result.coins) {
      const newArray = [...result.coins, coin]
      chrome.storage.sync.set({'coins': newArray}); 
    } else {
      chrome.storage.sync.set({'coins': [ coin ]}); 
    }
  });
  location.reload()
}

function deleteCoinFromStorage(id) {
  chrome.storage.sync.get(['coins'], function(result) {
    if(result.coins) {
      const filterResult = result.coins.filter(coin => coin.id !== id)
      chrome.storage.sync.set({'coins': filterResult});      
    }
  });
  location.reload()
}

/*---- Listen to form submit ----*/

formSelectCoin.addEventListener("submit", function(evt) {
  evt.preventDefault();
  const { text:name, value:id } = dropdown.options[dropdown.selectedIndex]
  addCoinToStorage({ id, name })
});

/*---- Crate selected Coin List ----*/

function createCoinItem(id, name) {
  let itemCoin = document.createElement('div')
  let itemContent = document.createTextNode(name)
  let deleteButton = document.createElement('button')
  deleteButton.innerHTML = "x"
  deleteButton.id = id
  deleteButton.addEventListener('click', (e) => deleteCoinFromStorage(e.target.id))
  itemCoin.className = 'coin-item'
  itemCoin.appendChild(itemContent)
  itemCoin.appendChild(deleteButton)
  divCoins.appendChild(itemCoin)
}

function createCoinsList(coins) {
  coins.forEach((item) => {
    createCoinItem(item.id, item.name)
  });
} 

function populateSelecteds() {
  chrome.storage.sync.get(['coins'], function (obj) {  
    createCoinsList(obj.coins)
  })
}

/* Run on Start */

populateSelecteds();