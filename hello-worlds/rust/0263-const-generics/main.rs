fn print_array<const N: usize>(arr: [char; N]) {
    for c in arr { print!("{}", c); }
    println!();
}
fn main() {
    print_array(['H','e','l','l','o',',',' ','W','o','r','l','d','!']);
}
