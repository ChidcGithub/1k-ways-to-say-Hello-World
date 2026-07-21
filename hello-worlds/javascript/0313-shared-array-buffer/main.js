const sab = new SharedArrayBuffer(13);
const view = new Uint8Array(sab);
const msg = "Hello, World!";
for (let i = 0; i < msg.length; i++) view[i] = msg.charCodeAt(i);
let result = "";
for (let i = 0; i < view.length; i++) result += String.fromCharCode(view[i]);
console.log(result);
