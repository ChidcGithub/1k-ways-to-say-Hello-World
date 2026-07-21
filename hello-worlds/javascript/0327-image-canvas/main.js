const canvas = document.createElement("canvas");
canvas.width = 200;
canvas.height = 50;
const ctx = canvas.getContext("2d");
ctx.font = "20px Arial";
ctx.fillText("Hello, World!", 10, 30);
document.body.appendChild(canvas);
console.log("Canvas rendered: Hello, World!");
