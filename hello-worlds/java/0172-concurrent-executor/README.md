---
id: 0172
language: java
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "Uses ExecutorService to submit the greeting task."
author: ChidcGithub
date: 2026-07-20
---

# #0172 · Java Concurrent Executor

## Description

An `ExecutorService` is created with a single-thread pool. A callable lambda returning the greeting string is submitted, producing a `Future<String>` whose result is fetched and printed before the executor is shut down — a modern, framework-managed alternative to raw `Thread`.

## Source Code

`Main.java`:

```java
import java.util.concurrent.*;
public class Main {
    public static void main(String[] args) throws Exception {
        ExecutorService es = Executors.newSingleThreadExecutor();
        Future<String> f = es.submit(() -> "Hello, World!");
        System.out.println(f.get());
        es.shutdown();
    }
}
```

## Run

```bash
cd hello-worlds/java/0172-concurrent-executor
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `concurrent` | Uses `ExecutorService` and `Future` for async task |
| output | `stdout` | Result retrieved via `Future.get()` and printed |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | `java.util.concurrent` executors since Java 5 (2004) |
| tags | `[parallel]` | Task runs asynchronously on a worker thread |

## Reference

- `java.util.concurrent.ExecutorService`, `Executors`, `Future`.
- `java.util.concurrent` package (Java 5, 2004).
