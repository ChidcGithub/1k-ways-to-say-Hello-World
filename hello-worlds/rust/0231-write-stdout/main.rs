use std::io::Write;
fn main() {
    let mut stdout = std::io::stdout().lock();
    write!(stdout, "Hello, World!\n").unwrap();
}
