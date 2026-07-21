use std::future::Future;
use std::io::Write;
use std::fs;
use std::pin::Pin;
use std::task::{Context, Poll, RawWaker, RawWakerVTable, Waker};

struct FileWrite;
impl Future for FileWrite {
    type Output = ();
    fn poll(self: Pin<&mut Self>, _cx: &mut Context<'_>) -> Poll<Self::Output> {
        let mut f = fs::File::create("hello.txt").expect("create failed");
        f.write_all(b"Hello, World!\n").expect("write failed");
        Poll::Ready(())
    }
}

fn noop_raw_waker() -> RawWaker {
    fn noop_clone(_: *const ()) -> RawWaker { noop_raw_waker() }
    fn noop(_: *const ()) {}
    static VTABLE: RawWakerVTable = RawWakerVTable::new(noop_clone, noop, noop, noop);
    RawWaker::new(std::ptr::null(), &VTABLE)
}

fn main() {
    let mut fut = Box::pin(FileWrite);
    let raw_waker = noop_raw_waker();
    let waker = unsafe { Waker::from_raw(raw_waker) };
    let mut cx = Context::from_waker(&waker);
    let _ = fut.as_mut().poll(&mut cx);
}
