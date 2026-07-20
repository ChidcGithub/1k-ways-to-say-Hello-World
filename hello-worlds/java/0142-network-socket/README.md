---
id: 0142
language: java
paradigm: procedural
output: network
platform: cli
era: classic
tags: []
notes: "Sends 'Hello, World!' over a TCP socket to localhost:8080; classic java.net.Socket."
author: ChidcGithub
date: 2026-07-20
---

# #0142 · Java Network Socket

## Description

Opens a TCP connection to `localhost:8080` using the classic `java.net.Socket` API and writes `Hello, World!\n` to the resulting output stream. The socket is wrapped in a try-with-resources block so it is automatically closed. Because there is normally no server listening, the connect will fail and the exception is caught and reported on standard error — the program still compiles and runs cleanly. The logical output medium is the network: a real listener (e.g. `nc -l 8080`) would receive the greeting as a TCP payload.

## Source Code

`Main.java`:

```java
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
```

## Run

Start a listener in one terminal:

```bash
nc -l 8080
```

In another terminal, compile and run the sender:

```bash
cd hello-worlds/java/0142-network-socket
javac Main.java
java Main
```

The listener should receive `Hello, World!` followed by a newline.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `procedural` | Single static method, sequential statements |
| output | `network` | Greeting is written to a TCP socket |
| platform | `cli` | Run from the terminal |
| era | `classic` | `java.net.Socket` has been in the JDK since Java 1.0 (1996) |
| tags | `[]` | No special technique tag |

## Reference

- [java.net.Socket (Oracle JDK docs)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/net/Socket.html)
- Java 1.0 platform — `java.net` package introduction (1996).
