fn main() {
    let bytes: [u8; 13] = [72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33];
    println!("{}", String::from_utf8(bytes.to_vec()).unwrap());
}
