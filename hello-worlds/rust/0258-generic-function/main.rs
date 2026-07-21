use std::fmt::Display;
fn greet<T: Display>(msg: T) { println!("{}", msg); }
fn main() { greet("Hello, World!"); }
