---
id: 0175
language: java
paradigm: concurrent
output: stdout
platform: cli
era: contemporary
tags: [parallel]
notes: "CompletableFuture chain with thenAccept; contemporary async style."
author: ChidcGithub
date: 2026-07-20
---

# #0175 · Java Concurrent Completable Contemporary

## Description

A `CompletableFuture.supplyAsync` produces the greeting on the fork-join pool, and `thenAccept` chains a side-effect that prints it. The chain is awaited with `join()` — a contemporary, fluent async style that mirrors reactive composition.

## Source Code

`Main.java`:

```java
import java.util.concurrent.*;
public class Main {
    public static void main(String[] args) throws Exception {
        CompletableFuture.supplyAsync(() -> "Hello, World!")
            .thenAccept(System.out::println)
            .join();
    }
}
```

## Run

```bash
cd hello-worlds/java/0175-concurrent-completable-contemporary
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `concurrent` | Async pipeline via `CompletableFuture` |
| output | `stdout` | Result printed via `thenAccept` consumer |
| platform | `cli` | Run from the terminal via `java` |
| era | `contemporary` | Idiomatic fluent async style in active use today |
| tags | `[parallel]` | Production and consumption run asynchronously |

## Reference

- `java.util.concurrent.CompletableFuture.supplyAsync`, `thenAccept`.
- Java 8 CompletableFuture (JEP, 2014).
