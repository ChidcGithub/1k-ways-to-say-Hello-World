const event = new CustomEvent("greet", { detail: "Hello, World!" });
document.addEventListener("greet", (e) => {
    document.body.innerHTML = e.detail;
});
document.dispatchEvent(event);
