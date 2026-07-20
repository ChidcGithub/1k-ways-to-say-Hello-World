---
id: 0171
language: java
paradigm: concurrent
output: stdout
platform: cli
era: classic
tags: [parallel]
notes: "Extends Thread to print the greeting from a separate thread."
author: ChidcGithub
date: 2026-07-20
---

# #0171 · Java Concurrent Thread

## Description

A nested `GreeterThread` class extends `Thread` and overrides `run()` to print the greeting. The main thread starts the worker and waits on `join()`, producing a classic multithreaded Hello World that pre-dates the executor framework.

## Source Code

`Main.java`:

```java
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
```

## Run

```bash
cd hello-worlds/java/0171-concurrent-thread
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `concurrent` | Spawns a worker thread via `Thread.start()` |
| output | `stdout` | Worker prints via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `classic` | `Thread` class available since Java 1.0 (1996) |
| tags | `[parallel]` | Work runs concurrently with the main thread |

## Reference

- `java.lang.Thread` class and `Thread.start()` / `Thread.join()`.
- Java 1.0 language specification (1996).
