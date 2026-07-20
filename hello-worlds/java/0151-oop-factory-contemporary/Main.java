public class Main {
    sealed interface Greeter permits HelloGreeter {}
    record HelloGreeter() implements Greeter { public void greet() { System.out.println("Hello, World!"); } }
    static class GreeterFactory { public static Greeter create() { return new HelloGreeter(); } }
    public static void main(String[] args) { ((HelloGreeter) GreeterFactory.create()).greet(); }
}
