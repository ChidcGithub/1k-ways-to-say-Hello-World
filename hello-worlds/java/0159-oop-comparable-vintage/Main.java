public class Main {
    static class Greeting implements Comparable<Greeting> {
        String msg;
        Greeting(String m) { this.msg = m; }
        public int compareTo(Greeting o) { return msg.compareTo(o.msg); }
        public String toString() { return msg; }
    }
    public static void main(String[] args) {
        Greeting g = new Greeting("Hello, World!");
        System.out.println(g);
    }
}
