import java.net.Socket;
import java.io.OutputStream;

public class Main {
    public static void main(String[] args) {
        // A server must be listening on localhost:8080 for the send to succeed.
        // Without a listener the connect will fail and the error is reported to stderr.
        try (Socket socket = new Socket("localhost", 8080)) {
            OutputStream out = socket.getOutputStream();
            out.write("Hello, World!\n".getBytes());
            out.flush();
        } catch (Exception e) {
            System.err.println("Could not send greeting: " + e.getMessage());
        }
    }
}
