// Browser WebSocket API (also available in Node.js with ws package)
// For syntax check, this is valid JS
const ws = new WebSocket("ws://localhost:8080");
ws.onopen = () => { ws.send("Hello, World!"); console.log("Sent via WebSocket"); };
ws.onerror = () => { console.log("Server not available; greeting: Hello, World!"); };
