function* chars(s) { for (const c of s) yield c; }
let result = "";
for (const c of chars("Hello, World!")) result += c;
console.log(result);
