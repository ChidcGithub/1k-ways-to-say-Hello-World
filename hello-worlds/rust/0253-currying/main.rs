fn main() {
    let greet = |a: String| move |b: String| move |c: String| format!("{}{}{}", a, b, c);
    println!("{}", greet("Hello".into())(", World".into())("!".into()));
}
