public class Main {
    static class GreetingException extends RuntimeException {
        public GreetingException(String msg) { super(msg); }
    }
    public static void main(String[] args) {
        try { throw new GreetingException("Hello, World!"); }
        catch (GreetingException e) { System.err.println(e.getMessage()); }
    }
}
