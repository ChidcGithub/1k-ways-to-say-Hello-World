use std::fs::File;
use std::io::Write;

fn main() {
    let mut f = File::create("hello.ppm").expect("create failed");
    f.write_all(b"P6\n100 30\n255\n").unwrap();
    for i in 0..30 {
        for j in 0..100 {
            let (r, g, b) = if i == 0 || i == 29 || j == 0 || j == 99 {
                (0u8, 0u8, 0u8)
            } else {
                (255u8, 255u8, 255u8)
            };
            f.write_all(&[r, g, b]).unwrap();
        }
    }
}
