enum Language { English }
impl Language {
    fn greet(&self) { match self { Language::English => println!("Hello, World!"), } }
}
fn main() { Language::English.greet(); }
