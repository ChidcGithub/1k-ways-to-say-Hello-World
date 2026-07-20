public class Main {
    sealed static class Greeter permits HelloGreeter {
        void greet() { System.err.println("Hello, World!"); }
    }
    static final class HelloGreeter extends Greeter {}
    public static void main(String[] args) { new HelloGreeter().greet(); }
}
