const addWorld = s => s + ", World";
const addBang = s => s + "!";
const compose = (f, g) => x => f(g(x));
const greet = compose(addBang, addWorld);
console.log(greet("Hello"));
