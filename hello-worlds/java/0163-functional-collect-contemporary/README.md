---
id: 0163
language: java
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses Collectors.joining() to assemble the greeting from a stream."
author: ChidcGithub
date: 2026-07-20
---

# #0163 · Java Functional Collect Contemporary

## Description

A contemporary Java functional entry that uses `Collectors.joining()` to assemble three greeting fragments into the final string. Compared to the basic `reduce` form, `Collectors` is the higher-level terminal-operation API introduced in Java 8 that became the idiomatic way to materialize a stream into a collection or string in modern codebases (Java 8–17, contemporary era).

## Source Code

`Main.java`:

```java
import java.util.stream.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        List<String> parts = Arrays.asList("Hello", ", ", "World!");
        System.out.println(parts.stream().collect(Collectors.joining()));
    }
}
```

## Run

```bash
cd hello-worlds/java/0163-functional-collect-contemporary
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 8+) |
| paradigm | `functional` | Stream + `Collectors` terminal operation |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Runs from the terminal |
| era | `contemporary` | `Collectors` is the idiomatic Java 8–17 style (contemporary) |
| tags | `[]` | No special technique worth indexing |

## Reference

- [java.util.stream.Collectors (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/stream/Collectors.html)
- [Collectors.joining (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/stream/Collectors.html#joining())
