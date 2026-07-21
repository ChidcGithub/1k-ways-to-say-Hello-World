use std::fmt::Display;
fn greet<T: Display + AsRef<str>>(msg: T) {
    println!("{} (len: {})", msg, msg.as_ref().len());
}
fn main() { greet("Hello, World!"); }
