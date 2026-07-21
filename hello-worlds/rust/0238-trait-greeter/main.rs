trait Greeter { fn greet(&self); }
struct English;
impl Greeter for English { fn greet(&self) { println!("Hello, World!"); } }
fn main() { English.greet(); }
