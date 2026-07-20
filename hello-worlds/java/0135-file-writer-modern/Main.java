import java.io.*;
public class Main { public static void main(String[] args) throws Exception { try (FileWriter fw = new FileWriter("hello.txt")) { fw.write("Hello, World!"); } System.out.println("Written to hello.txt"); } }
