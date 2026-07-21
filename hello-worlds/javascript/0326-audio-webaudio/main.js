const ctx = new (window.AudioContext || window.webkitAudioContext)();
const osc = ctx.createOscillator();
osc.connect(ctx.destination);
osc.start();
osc.stop(ctx.currentTime + 0.5);
console.log("Playing audio: Hello, World!");
