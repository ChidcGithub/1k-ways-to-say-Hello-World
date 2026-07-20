import java.net.http.*;
import java.net.URI;

public class Main {
    public static void main(String[] args) throws Exception {
        HttpClient client = HttpClient.newHttpClient();
        HttpRequest req = HttpRequest.newBuilder()
                .uri(URI.create("http://localhost:8080/"))
                .POST(HttpRequest.BodyPublishers.ofString("Hello, World!"))
                .build();
        // client.send(req, HttpResponse.BodyHandlers.ofString()); // would block; commented out for safety
        System.out.println("HTTP request prepared: Hello, World!");
    }
}
