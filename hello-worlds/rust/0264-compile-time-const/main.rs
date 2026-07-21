const fn build_greeting() -> &'static str { "Hello, World!" }
const GREETING: &str = build_greeting();
fn main() { println!("{}", GREETING); }
