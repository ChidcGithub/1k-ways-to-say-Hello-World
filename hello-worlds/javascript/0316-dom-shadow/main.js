const host = document.createElement("div");
document.body.appendChild(host);
const shadow = host.attachShadow({ mode: "open" });
shadow.innerHTML = "<p>Hello, World!</p>";
