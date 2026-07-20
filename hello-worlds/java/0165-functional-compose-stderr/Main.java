import java.util.function.*;
public class Main {
    public static void main(String[] args) {
        Function<String, String> addWorld = s -> s + ", World";
        Function<String, String> addBang = s -> s + "!";
        Function<String, String> greet = addWorld.andThen(addBang);
        System.err.println(greet.apply("Hello"));
    }
}
