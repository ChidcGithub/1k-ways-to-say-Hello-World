fn main() {
    std::fs::write("hello.txt", "Hello, World!").unwrap();
    println!("Written to hello.txt");
}
