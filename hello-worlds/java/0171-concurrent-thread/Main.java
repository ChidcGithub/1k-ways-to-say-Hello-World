public class Main {
    static class GreeterThread extends Thread {
        public void run() { System.out.println("Hello, World!"); }
    }
    public static void main(String[] args) throws Exception {
        GreeterThread t = new GreeterThread();
        t.start();
        t.join();
    }
}
