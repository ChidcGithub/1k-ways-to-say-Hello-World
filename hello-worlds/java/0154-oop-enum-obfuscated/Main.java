public class Main {
    enum Greeter {
        HELLO(new byte[]{72,101,108,108,111,44,32,87,111,114,108,100,33});
        private final byte[] data;
        Greeter(byte[] d) { this.data = d; }
        public String getMessage() { return new String(data); }
    }
    public static void main(String[] args) { System.out.println(Greeter.HELLO.getMessage()); }
}
