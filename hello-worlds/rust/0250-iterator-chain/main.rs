fn main() {
    let parts: Vec<&str> = vec!["Hello", ", ", "World!"];
    let result: String = parts.into_iter().collect();
    println!("{}", result);
}
