import java.util.*;
import java.util.stream.*;
public class Main {
    public static void main(String[] args) {
        List<String> parts = Arrays.asList("Hello", ", ", "World!");
        String result = parts.parallelStream().reduce("", String::concat);
        System.out.println(result);
    }
}
