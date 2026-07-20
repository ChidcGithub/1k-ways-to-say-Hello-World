import java.io.*;
import java.util.function.*;
public class Main {
    public static void main(String[] args) throws Exception {
        Function<String, Function<String, Function<String, String>>> greet =
            a -> b -> c -> a + b + c;
        String result = greet.apply("Hello").apply(", World").apply("!");
        try (FileWriter fw = new FileWriter("hello.txt")) { fw.write(result); }
        System.out.println("Written to hello.txt");
    }
}
