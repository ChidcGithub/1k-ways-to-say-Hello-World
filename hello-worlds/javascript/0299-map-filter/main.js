const parts = ["Hello", ", ", "World!"];
const result = parts.map(s => s).filter(s => s.length > 0).join("");
console.log(result);
