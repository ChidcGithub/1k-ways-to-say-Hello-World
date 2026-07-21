const observer = new MutationObserver((mutations) => {
    console.log("DOM changed; greeting: Hello, World!");
});
observer.observe(document.body, { childList: true });
document.body.innerHTML = "Hello, World!";
