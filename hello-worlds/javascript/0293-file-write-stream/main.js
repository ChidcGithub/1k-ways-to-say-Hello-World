const fs = require("fs");
const ws = fs.createWriteStream("hello.txt");
ws.write("Hello, World!");
ws.end();
ws.on("finish", () => console.log("Written to hello.txt"));
