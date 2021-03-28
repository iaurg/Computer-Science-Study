const apiUrl = "https://api.coingecko.com/api/v3/"
const tableElement = document.getElementById("coin-table")

document.getElementById('go-to-options').addEventListener("click", function() {
  if (chrome.runtime.openOptionsPage) {
    chrome.runtime.openOptionsPage();
  } else {
    window.open(chrome.runtime.getURL('options.html'));
  }
});

function constructCoinModel(image, symbol, name, price, change) {
  const changeType = change < 0 ? 'negative' : 'positive'
  const formatedPrice = new Intl.NumberFormat('en', { style: 'currency', currency: 'USD' }).format(price)
  return `
  <td class="coin-market">
    <img class="coin-image" src="${image}" alt="${name}">
    <div class="coin-identifiers">
      <span class="coin-identifiers--symbol">${symbol}</span>
      <span class="coin-identifiers--name">${name}</span>
    </div>
  </td>
  <td>
    <span class="coin-price">${formatedPrice}</span>
  </td>     
  <td class="coin-change">
    <span class="coin-change--${changeType}">${change.toFixed(2)}%</span>
  </td>  
  `
}

function getSelectedCoins() {
  chrome.storage.sync.get("coins");
}

function fillTable(coins) {
  coins.forEach(async element => {
    await fetch(`${apiUrl}/coins/${element.id}?localization=false&tickers=false&community_data=false&developer_data=false&sparkline=false`)
    .then(response => response.json())
    .then(response => {
      const { image, symbol, name, market_data} = response
      const element = constructCoinModel(image.small, symbol, name, market_data.current_price.usd, market_data.price_change_percentage_24h)
      const trElement = document.createElement('tr')
      trElement.id = 'coin-data'
      trElement.innerHTML = element
      tableElement.appendChild(trElement)
    })
  });
}

chrome.storage.sync.get(['coins'], function({ coins }) {
  fillTable(coins);
});