// Mock for hosted compilation - real embedded would use no_std + HAL crate
struct Uart;
impl Uart {
    fn write_str(&self, s: &str) { println!("[UART]: {}", s); }
}
fn main() {
    let uart = Uart;
    uart.write_str("Hello, World!");
}
