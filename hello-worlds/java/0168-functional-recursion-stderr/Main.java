public class Main {
    static void printChars(String s, int i) {
        if (i >= s.length()) { System.err.println(); return; }
        System.err.print(s.charAt(i));
        printChars(s, i + 1);
    }
    public static void main(String[] args) { printChars("Hello, World!", 0); }
}
