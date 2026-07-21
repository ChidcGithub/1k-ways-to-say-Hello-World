// Mock wasm_bindgen for local compilation
mod wasm_bindgen {
    pub fn console_log(s: &str) { println!("[WASM console]: {}", s); }
}
fn main() { wasm_bindgen::console_log("Hello, World!"); }
