public class Main {
    interface Iterator<T> { boolean hasNext(); T next(); }
    static class CharIterator implements Iterator<Character> {
        private final String s; private int i = 0;
        CharIterator(String s) { this.s = s; }
        public boolean hasNext() { return i < s.length(); }
        public Character next() { return s.charAt(i++); }
    }
    static class JLabel { JLabel(String s){} void show(){ System.out.println("[Swing JLabel]: Hello, World!"); } }
    public static void main(String[] args) {
        CharIterator it = new CharIterator("Hello, World!");
        StringBuilder sb = new StringBuilder();
        while (it.hasNext()) sb.append(it.next());
        new JLabel(sb.toString()).show();
    }
}
