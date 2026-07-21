extern "C" {
    fn puts(s: *const i8);
}

fn main() {
    unsafe {
        puts(b"Hello, World!\0".as_ptr() as *const i8);
    }
}
