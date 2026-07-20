public class Main {
    static class Greeter {
        @Override
        public String toString() {
            return "Hello, World!";
        }
    }

    public static void main(String[] args) {
        System.out.println(new Greeter());
    }
}
