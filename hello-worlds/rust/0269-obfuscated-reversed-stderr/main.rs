fn main() {
    let reversed = "!dlroW ,olleH";
    let original: String = reversed.chars().rev().collect();
    eprintln!("{}", original);
}
