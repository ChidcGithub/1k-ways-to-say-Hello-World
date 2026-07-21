const getGreeting = (function() {
    let cached = null;
    return function() {
        if (cached === null) cached = "Hello, World!";
        return cached;
    };
})();
console.log(getGreeting());
