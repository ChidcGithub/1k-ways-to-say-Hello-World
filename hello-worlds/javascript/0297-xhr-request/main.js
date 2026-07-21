const xhr = new XMLHttpRequest();
xhr.open("POST", "http://localhost:8080", true);
xhr.onreadystatechange = function() {
    if (xhr.readyState === 4) console.log("Sent via XHR");
};
xhr.send("Hello, World!");
