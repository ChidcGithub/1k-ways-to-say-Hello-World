fn main() {
    let parts = vec!["Hello", ", ", "World!"];
    let result = parts.iter().fold(String::new(), |acc, &s| acc + s);
    println!("{}", result);
}
