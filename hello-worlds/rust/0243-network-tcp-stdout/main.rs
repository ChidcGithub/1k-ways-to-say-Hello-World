use std::net::TcpStream;
use std::io::Write;
fn main() {
    match TcpStream::connect("127.0.0.1:8080") {
        Ok(mut stream) => { let _ = stream.write_all(b"Hello, World!\n"); println!("Sent to server"); }
        Err(_) => { println!("Server not available; greeting: Hello, World!"); }
    }
}
