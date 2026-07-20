---
id: 0174
language: java
paradigm: concurrent
output: stderr
platform: cli
era: modern
tags: [parallel]
notes: "Uses AtomicReference to hold greeting; printed to stderr after thread completes."
author: ChidcGithub
date: 2026-07-20
---

# #0174 · Java Concurrent Atomic Stderr

## Description

A worker thread stores the greeting into an `AtomicReference<String>`. After `join()`, the main thread reads the reference and prints its value to `System.err` — demonstrating lock-free thread-safe publication of a value between threads.

## Source Code

`Main.java`:

```java
import java.util.concurrent.atomic.*;
public class Main {
    public static void main(String[] args) throws Exception {
        AtomicReference<String> ref = new AtomicReference<>();
        Thread t = new Thread(() -> ref.set("Hello, World!"));
        t.start();
        t.join();
        System.err.println(ref.get());
    }
}
```

## Run

```bash
cd hello-worlds/java/0174-concurrent-atomic-stderr
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `concurrent` | Spawns thread; shares data via `AtomicReference` |
| output | `stderr` | Output via `System.err.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | `java.util.concurrent.atomic` since Java 5 (2004) |
| tags | `[parallel]` | Value produced on a worker, consumed on main thread |

## Reference

- `java.util.concurrent.atomic.AtomicReference`.
- Java Memory Model (JSR 133, Java 5, 2004).
