public class Main {
    record Greeting(String message) {}
    public static void main(String[] args) { System.out.println(new Greeting("Hello, World!").message()); }
}
