import java.io.*;
public class Main {
    static class Greeter {
        private static Greeter instance;
        private Greeter() {}
        public static Greeter getInstance() { if (instance == null) instance = new Greeter(); return instance; }
        public void greet() throws Exception { PrintWriter pw = new PrintWriter(new FileWriter("hello.txt")); pw.println("Hello, World!"); pw.close(); System.out.println("Written to hello.txt"); }
    }
    public static void main(String[] args) throws Exception { Greeter.getInstance().greet(); }
}
