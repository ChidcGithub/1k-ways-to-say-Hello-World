---
id: 0143
language: java
paradigm: procedural
output: network
platform: cli
era: modern
tags: []
notes: "Uses java.net.http.HttpClient (Java 11+) to POST the greeting to a URL."
author: ChidcGithub
date: 2026-07-20
---

# #0143 · Java Network HTTP

## Description

Builds an HTTP `POST` request carrying the body `Hello, World!` using the standard `java.net.http.HttpClient` API introduced in Java 11. The client and request are constructed with the fluent builder pattern. The actual `client.send(...)` call is intentionally commented out so that running the program does not block waiting for a server that is not present — instead, a status line is printed to confirm the request was prepared. The logical output medium is the network: an HTTP server listening at `http://localhost:8080/` would receive the greeting as the request body.

## Source Code

`Main.java`:

```java
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
```

## Run

Compile and run (JDK 11 or later required):

```bash
cd hello-worlds/java/0143-network-http
javac Main.java
java Main
```

To actually deliver the greeting, start an HTTP server that echoes request bodies (e.g. `python -m http.server 8080`), uncomment the `client.send(...)` line, and recompile.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 11+) |
| paradigm | `procedural` | Sequential statements in a static method |
| output | `network` | Greeting is the body of an HTTP POST request |
| platform | `cli` | Run from the terminal |
| era | `modern` | `java.net.http.HttpClient` was added in Java 11 (2018) |
| tags | `[]` | No special technique tag |

## Reference

- [java.net.http.HttpClient (Oracle JDK 11 docs)](https://docs.oracle.com/en/java/javase/11/docs/api/java.net.http/java/net/http/HttpClient.html)
- JEP 321: HTTP Client (Standard) — delivered in Java 11.
