public class Main {
    interface Greeter { default void greet() { System.out.println("Hello, World!"); } }
    static class GreeterImpl implements Greeter {}
    public static void main(String[] args) { new GreeterImpl().greet(); }
}
