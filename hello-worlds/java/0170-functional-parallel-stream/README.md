---
id: 0170
language: java
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: [parallel]
notes: "Parallel stream processes greeting parts concurrently; assembled and printed."
author: ChidcGithub
date: 2026-07-20
---

# #0170 · Java Functional Parallel Stream

## Description

The greeting is split into three parts stored in a `List<String>`. A parallel stream reduces them with `String::concat`, allowing the parts to be processed concurrently across the fork-join pool before being reassembled and printed.

## Source Code

`Main.java`:

```java
import java.util.*;
import java.util.stream.*;
public class Main {
    public static void main(String[] args) {
        List<String> parts = Arrays.asList("Hello", ", ", "World!");
        String result = parts.parallelStream().reduce("", String::concat);
        System.out.println(result);
    }
}
```

## Run

```bash
cd hello-worlds/java/0170-functional-parallel-stream
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `functional` | Uses stream `reduce` with a function reference |
| output | `stdout` | Final string printed via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `contemporary` | Parallel streams introduced in Java 8 (2014), widely used today |
| tags | `[parallel]` | Uses `parallelStream()` for concurrent processing |

## Reference

- `java.util.stream.Stream.parallelStream` and `reduce`.
- Java 8 Streams (JEP 107, 2014).
