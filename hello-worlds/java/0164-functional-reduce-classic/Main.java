import java.util.*;
public class Main {
    public static void main(String[] args) {
        List<String> parts = Arrays.asList("Hello", ", ", "World!");
        String result = parts.stream().reduce("", (a, b) -> a + b);
        System.out.println(result);
    }
}
