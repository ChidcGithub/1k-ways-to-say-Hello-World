const greet = a => b => c => `${a}${b}${c}`;
console.log(greet("Hello")(", World")("!"));
