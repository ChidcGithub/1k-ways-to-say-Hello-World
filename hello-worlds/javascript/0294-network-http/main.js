const http = require("http");
const req = http.request({ hostname: "localhost", port: 8080, method: "POST" }, (res) => {
    console.log("Sent HTTP request: Hello, World!");
});
req.on("error", () => { console.log("Server not available; greeting: Hello, World!"); });
req.write("Hello, World!");
req.end();
