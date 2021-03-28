# Cryfo
#### Video Demo:  https://youtu.be/nGyuO2F05GI

#### Description:

This project is based on two API's [Coin Gecko API](https://www.coingecko.com/en/api) and [Chrome Extensions API](https://developer.chrome.com/docs/extensions)

**Coin Gecko API**: Is responsible for providing all data about the crypto market, I used this API because it's free and open, so this allows me to do what I need.

**Chrome Extensions API**: I've used this extension API to get more powerful and fast features inside my extensions, instead of using browser default features,
Chrome developed this api with more fast methods to access browser data and also interchange between anonymous and account in the browser. A lot based on [these docs](https://developer.chrome.com/docs/extensions/mv3/getstarted/)

## Looking through each file

### Globals and configurations
_global.css_: Inside this file, I've created CSS to reset some browser features and also set a lot of patterns to my project, so every page maintains a consistent visual.
_LICENSE_: This is just a file to tell which license I'm using, MIT by the way.
_manifest.json_: This is a configuration file that follows Google pattern allowing to use of some features and also providing, names, images, and icons to extension.

### Options Screen
This screen is created using three files called options with their respective extensions. And is responsible to adjust coins tracked.

_options.js_: Inside this code, I created a script to make calls to Gecko Api and GET top 250 coins in market cap, so after this user can select which coin he wants to
track. After the user selects the coins, I use Chrome storage to hold all these values persisting also if the browser is closed. Basically, their responsibility is to arrange data.

__options.html/options.css_: Beyond the file global.css we have a css for each html separately to provide better performance. Inside this, I've organized both a form
and a list to show all data in a customized UI to the final user.

I had to choose between "options" inside popup or on an external page. To keep extension with a cleaner visual possible I choose to move options to a new tab, based
on two things:
1 - It's rare for a user that changes their coins a lot.
2 - After the user sets some coins to track, he can take a long time to remove or add new coins.

### Popup Screen
This screen is responsible to show the final user all the coins he is tracking, with real-time data like prices, name, and market float.

_popup.js_: This file gets all selected coins by the user stored on chrome storage and makes a GET to api for each coin to list her info. This data is loaded every time user clicks
on popup, so when he clicks we always use the last data from api. Also, this script populates the table inside popup with all data provided by api.

__popup.html/popup.css_: This has the same functionality as options html, here we present the "core" of extension to the final user inside a mini popup attached to
a browser extension icon.

Inside this pop up I have a lot of data coming from API, so I need to choose carefully which data I want to show on popup. I use the three more important data in my vision
, I also wanted to put exchanges, Github repository of coins, Reddit groups, various market cap variations, but I was concerned that over-complicate the extension.

## Final comments

I provided this extension as an open-source project on my GitHub, so anyone can use this. I also know that we can increment this extension in many ways using Gecko
API, because they provide a lot of endpoints to consume, but by now I take care to develop a centered functional feature.