---
id: 0176
language: java
paradigm: reactive
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses Java 9+ java.util.concurrent.Flow API; simple SubmissionPublisher emitting the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0176 · Java Reactive Flow

## Description

A `SubmissionPublisher<String>` (the standard library's reactive publisher) emits the greeting, which is consumed by a minimal `Flow.Subscriber` that requests one item and prints it on `onNext`. This is the JDK's built-in implementation of the Reactive Streams contract.

## Source Code

`Main.java`:

```java
import java.util.concurrent.*;
public class Main {
    public static void main(String[] args) throws Exception {
        SubmissionPublisher<String> publisher = new SubmissionPublisher<>();
        publisher.subscribe(new Flow.Subscriber<>() {
            public void onSubscribe(Flow.Subscription s) { s.request(1); }
            public void onNext(String item) { System.out.println(item); }
            public void onError(Throwable t) {}
            public void onComplete() {}
        });
        publisher.submit("Hello, World!");
        publisher.close();
        Thread.sleep(100);
    }
}
```

## Run

```bash
cd hello-worlds/java/0176-reactive-flow
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `reactive` | Uses `Flow.Publisher` / `Flow.Subscriber` |
| output | `stdout` | Subscriber prints via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `contemporary` | `Flow` API added in Java 9 (2017) |
| tags | `[]` | Standard reactive streams; no extra technique |

## Reference

- `java.util.concurrent.Flow` (Reactive Streams interop, Java 9, 2017).
- `java.util.concurrent.SubmissionPublisher`.
