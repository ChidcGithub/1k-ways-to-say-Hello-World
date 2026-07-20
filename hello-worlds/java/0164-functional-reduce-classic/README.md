---
id: 0164
language: java
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Classic-style reduce (identity + accumulator) to fold greeting parts."
author: ChidcGithub
date: 2026-07-20
---

# #0164 · Java Functional Reduce Classic

## Description

A classic-style functional Hello World that uses the basic `reduce(identity, accumulator)` form to fold three greeting fragments into the final string. The `(a, b) -> a + b` accumulator is the most primitive reduce form, predating the `Collectors` era and resembling the original fold-style API added to streams. The note explicitly classifies this as `era=classic` because it uses the pre-collectors basic reduce form, in keeping with the project's era taxonomy.

## Source Code

`Main.java`:

```java
import java.util.*;
public class Main {
    public static void main(String[] args) {
        List<String> parts = Arrays.asList("Hello", ", ", "World!");
        String result = parts.stream().reduce("", (a, b) -> a + b);
        System.out.println(result);
    }
}
```

## Run

```bash
cd hello-worlds/java/0164-functional-reduce-classic
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 8+) |
| paradigm | `functional` | `Stream.reduce` with a binary accumulator |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Runs from the terminal |
| era | `classic` | Basic reduce form (pre-collectors era styling) |
| tags | `[]` | No special technique worth indexing |

## Reference

- [java.util.stream.Stream.reduce (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/stream/Stream.html#reduce(T,java.util.function.BinaryOperator))
- [java.util.Arrays.asList (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/Arrays.html#asList(T...))
