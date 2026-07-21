fetch("http://localhost:8080", { method: "POST", body: "Hello, World!" })
    .then(() => console.log("Sent via fetch"))
    .catch(() => console.log("Server not available; greeting: Hello, World!"));
