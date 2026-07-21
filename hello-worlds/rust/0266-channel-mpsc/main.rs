use std::sync::mpsc;
use std::thread;
fn main() {
    let (tx, rx) = mpsc::channel();
    thread::spawn(move || { tx.send("Hello, World!").unwrap(); });
    println!("{}", rx.recv().unwrap());
}
