import java.io.*;
import java.lang.annotation.*;
@Retention(RetentionPolicy.RUNTIME) @interface GreetingMethod {}
public class Main {
    @GreetingMethod
    public static String getGreeting() { return "Hello, World!"; }
    public static void main(String[] args) throws Exception {
        String msg = getGreeting();
        try (FileWriter fw = new FileWriter("hello.txt")) { fw.write(msg); }
        System.out.println("Written to hello.txt");
    }
}
