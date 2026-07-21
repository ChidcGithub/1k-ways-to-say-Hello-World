fn main() {
    let s = "fn main() {\n    let s = %s;\n    println!(\"{}\", s.replace(\"%s\", &format!(\"{:?}\", s)));\n    println!(\"Hello, World!\");\n}";
    println!("{}", s.replace("%s", &format!("{:?}", s)));
    println!("Hello, World!");
}
