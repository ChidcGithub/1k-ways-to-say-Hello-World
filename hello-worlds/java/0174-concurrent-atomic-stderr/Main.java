import java.util.concurrent.atomic.*;
public class Main {
    public static void main(String[] args) throws Exception {
        AtomicReference<String> ref = new AtomicReference<>();
        Thread t = new Thread(() -> ref.set("Hello, World!"));
        t.start();
        t.join();
        System.err.println(ref.get());
    }
}
