import java.util.stream.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        List<String> parts = Arrays.asList("Hello", ", ", "World!");
        System.out.println(parts.stream().collect(Collectors.joining()));
    }
}
