struct GreeterBuilder { parts: Vec<String> }
impl GreeterBuilder {
    fn new() -> Self { GreeterBuilder { parts: Vec::new() } }
    fn add(mut self, s: &str) -> Self { self.parts.push(s.to_string()); self }
    fn build(&self) { eprintln!("{}", self.parts.join("")); }
}
fn main() { GreeterBuilder::new().add("Hello").add(", ").add("World!").build(); }
