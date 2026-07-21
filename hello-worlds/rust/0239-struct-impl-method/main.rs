struct Greeter { msg: String }
impl Greeter {
    fn new() -> Self { Greeter { msg: String::from("Hello, World!") } }
    fn greet(&self) { println!("{}", self.msg); }
}
fn main() { Greeter::new().greet(); }
