// Solve the questions below:

// #1) Create a promise that resolves in 4 seconds and returns "success" string
const italo = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("Sucess!");
  }, 4000);
});
// #2) Run the above promise and make it console.log "success"
italo.then(result => console.log(result));

// #3) Read about Promise.resolve() and Promise.reject(). How can you make
// the above promise shorter with Promise.resolve() and console loggin "success"
Promise.resolve("Success").then((value) => {
  setTimeout(() => {
    console.log(value); // "Success"
    }, 4000);
});

// #4) Catch this error and console log 'Ooops something went wrong'
Promise.reject('failed').catch((erro) => {
  console.error(erro);
});

// #5) Use Promise.all to fetch all of these people from Star Wars (SWAPI) at the same time.
// Console.log the output and make sure it has a catch block as well.
const urls = [
  'https://swapi.c/api/people/1',
  'https://swapi.co/api/people/2',
  'https://swapi.co/api/people/3',
  'https://swapi.co/api/people/4'
]

Promise.all(urls.map(url => {
  return fetch(url).then(response => response.json())
})).then(results =>{
  console.log(results[0])
  console.log(results[1])
  console.log(results[2])
  console.log(results[3])
}).catch(() => console.log("Error!!!!"))

// #6) Change one of your urls above to make it incorrect and fail the promise
// does your catch block handle it?
//changed.
