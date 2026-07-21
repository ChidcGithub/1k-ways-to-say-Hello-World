fn main() {
    let add_world = |s: String| s + ", World";
    let add_bang = |s: String| s + "!";
    let greet = |s: &str| add_bang(add_world(s.to_string()));
    eprintln!("{}", greet("Hello"));
}
