const Greeter = (function() {
    let instance;
    function create() { return { greet() { console.log("Hello, World!"); } }; }
    return { getInstance() { if (!instance) instance = create(); return instance; } };
})();
Greeter.getInstance().greet();
