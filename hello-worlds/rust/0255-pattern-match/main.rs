fn main() {
    let greeting: Option<&str> = Some("Hello, World!");
    match greeting {
        Some(msg) => println!("{}", msg),
        None => println!("No greeting"),
    }
}
