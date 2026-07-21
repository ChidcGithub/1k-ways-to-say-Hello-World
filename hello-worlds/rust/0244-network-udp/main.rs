use std::net::UdpSocket;
fn main() {
    let socket = UdpSocket::bind("127.0.0.1:0").unwrap();
    let _ = socket.send_to(b"Hello, World!\n", "127.0.0.1:8080");
    println!("Sent via UDP");
}
