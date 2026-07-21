use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::Arc;
use std::thread;
fn main() {
    let done = Arc::new(AtomicBool::new(false));
    let done2 = Arc::clone(&done);
    let handle = thread::spawn(move || {
        println!("Hello, World!");
        done2.store(true, Ordering::SeqCst);
    });
    handle.join().unwrap();
    assert!(done.load(Ordering::SeqCst));
}
