import java.util.concurrent.*;
public class Main {
    public static void main(String[] args) throws Exception {
        CompletableFuture.supplyAsync(() -> "Hello, World!")
            .thenAccept(System.out::println)
            .join();
    }
}
