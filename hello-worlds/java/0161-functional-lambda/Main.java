import java.util.function.*;
public class Main {
    public static void main(String[] args) {
        Supplier<String> greeting = () -> "Hello, World!";
        System.out.println(greeting.get());
    }
}
