use std::fs::OpenOptions;
use std::io::Write;
fn main() {
    let mut f = OpenOptions::new().append(true).create(true).open("hello.txt").unwrap();
    writeln!(f, "Hello, World!").unwrap();
    eprintln!("Written to hello.txt");
}
