public class Main {
    abstract static class Greeter { abstract String getMessage(); void greet() { System.out.println(getMessage()); } }
    static class HelloGreeter extends Greeter {
        String getMessage() { char[] c={72,101,108,108,111,44,32,87,111,114,108,100,33}; return new String(c); }
    }
    public static void main(String[] args) { new HelloGreeter().greet(); }
}
