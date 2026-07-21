fn main() {
    let result = Some("Hello")
        .map(|s| format!("{}, World", s))
        .map(|s| format!("{}!", s))
        .unwrap_or_default();
    println!("{}", result);
}
