import java.util.concurrent.*;
public class Main {
    public static void main(String[] args) throws Exception {
        ExecutorService es = Executors.newSingleThreadExecutor();
        Future<String> f = es.submit(() -> "Hello, World!");
        System.out.println(f.get());
        es.shutdown();
    }
}
