async function getBtcPrice(){
    const card = document.getElementById("card-btc")
    const currentPrice = await fetch("https://api.gdax.com/products/BTC-USD/book").then(response => response.json())
    card.innerHTML = "1BTC = " + currentPrice.bids[0][0]
}

document.addEventListener("DOMContentLoaded", function(event) {
   getBtcPrice();
 });
