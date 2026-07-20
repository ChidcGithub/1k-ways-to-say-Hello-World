import java.util.function.*;
public class Main {
    public static void main(String[] args) { Consumer<String> c = System.out::println; c.accept("Hello, World!"); }
}
