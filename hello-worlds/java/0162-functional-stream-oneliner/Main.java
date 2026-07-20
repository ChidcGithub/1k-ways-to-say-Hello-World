import java.util.stream.*;
public class Main {
    public static void main(String[] args) { System.out.println(Stream.of("Hello", ", ", "World!").reduce("", String::concat)); }
}
