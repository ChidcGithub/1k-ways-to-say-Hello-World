import java.util.concurrent.*;
import java.io.*;
public class Main {
    public static void main(String[] args) throws Exception {
        CompletableFuture<Void> cf = CompletableFuture.runAsync(() -> {
            try (FileWriter fw = new FileWriter("hello.txt")) { fw.write("Hello, World!"); }
            catch (Exception e) { throw new RuntimeException(e); }
        });
        cf.join();
        System.out.println("Written to hello.txt");
    }
}
