public class Main {
    static class GreeterBuilder {
        private String greeting = "";
        public GreeterBuilder add(String s) { greeting += s; return this; }
        public void build() { System.err.println(greeting); }
    }
    public static void main(String[] args) { new GreeterBuilder().add("Hello").add(", ").add("World!").build(); }
}
