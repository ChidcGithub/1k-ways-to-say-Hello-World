use std::fs::File;
use std::io::Write;

fn main() {
    let b64 = "SGVsbG8sIFdvcmxkIQ==";
    let mut out: Vec<u8> = Vec::new();
    let mut val: u32 = 0;
    let mut bits: u32 = 0;
    for c in b64.chars() {
        if c == '=' { break; }
        let v: u32 = if c >= 'A' && c <= 'Z' { (c as u32) - ('A' as u32) }
            else if c >= 'a' && c <= 'z' { (c as u32) - ('a' as u32) + 26 }
            else if c >= '0' && c <= '9' { (c as u32) - ('0' as u32) + 52 }
            else { 0 };
        val = (val << 6) | v;
        bits += 6;
        if bits >= 8 {
            bits -= 8;
            out.push(((val >> bits) & 0xFF) as u8);
        }
    }
    let mut f = File::create("hello.txt").expect("create failed");
    f.write_all(&out).expect("write failed");
}
