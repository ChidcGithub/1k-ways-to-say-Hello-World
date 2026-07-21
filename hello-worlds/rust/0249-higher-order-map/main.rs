fn main() {
    let chars: Vec<char> = "Hello, World!".chars().map(|c| c).collect();
    let s: String = chars.into_iter().collect();
    println!("{}", s);
}
