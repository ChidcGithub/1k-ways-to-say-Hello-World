extern "C" {
    fn write(fd: i32, buf: *const u8, count: usize) -> isize;
}

fn main() {
    let msg = b"Hello, World!\n";
    unsafe {
        write(2, msg.as_ptr(), msg.len());
    }
}
