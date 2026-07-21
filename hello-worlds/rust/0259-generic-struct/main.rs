use std::fmt::Display;
struct Message<T> { content: T }
impl<T: Display> Message<T> {
    fn new(content: T) -> Self { Message { content } }
    fn print(&self) { println!("{}", self.content); }
}
fn main() { Message::new("Hello, World!").print(); }
