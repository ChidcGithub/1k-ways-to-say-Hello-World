fn print_rec(s: &[u8], i: usize) {
    if i >= s.len() { println!(); return; }
    print!("{}", s[i] as char);
    print_rec(s, i + 1);
}
fn main() { print_rec(b"Hello, World!", 0); }
