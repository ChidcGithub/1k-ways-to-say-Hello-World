use std::thread;
fn main() {
    let handle = thread::spawn(|| { println!("Hello, World!"); });
    handle.join().unwrap();
}
