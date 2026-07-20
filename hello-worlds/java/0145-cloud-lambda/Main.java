public class Main {
    // AWS Lambda invokes this method via RequestStreamHandler / POJO handler
    // reflection. The platform serializes the returned String into the
    // Lambda response body.
    public String handleRequest(Object input) {
        return "Hello, World!";
    }

    public static void main(String[] args) {
        Main h = new Main();
        System.out.println(h.handleRequest(null));
    }
}
