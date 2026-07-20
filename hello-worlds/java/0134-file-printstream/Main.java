import java.io.*;
public class Main { public static void main(String[] args) throws Exception { PrintStream ps = new PrintStream(new FileOutputStream("hello.txt")); ps.println("Hello, World!"); ps.close(); System.out.println("Written to hello.txt"); } }
