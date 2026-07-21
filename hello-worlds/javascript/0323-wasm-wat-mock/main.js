// Mock WASM module
const wasmModule = {
    exports: {
        greet: () => "Hello, World!"
    }
};
console.log(wasmModule.exports.greet());
