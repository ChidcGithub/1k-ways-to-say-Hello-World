trait Greeter { fn greet(&self); }
struct Hello;
impl Greeter for Hello { fn greet(&self) { println!("Hello, World!"); } }
fn main() {
    let g: Box<dyn Greeter> = Box::new(Hello);
    g.greet();
}
