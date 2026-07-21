Promise.resolve("Hello")
    .then(s => s + ", World")
    .then(s => s + "!")
    .then(s => console.log(s));
