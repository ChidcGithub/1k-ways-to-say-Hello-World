---
id: 0167
language: java
paradigm: functional
output: file
platform: cli
era: contemporary
tags: []
notes: "Curried function builds greeting step by step; writes to file."
author: ChidcGithub
date: 2026-07-20
---

# #0167 · Java Functional Currying File Contemporary

## Description

A contemporary functional Hello World that builds the greeting through manual currying: `greet` is a `Function<String, Function<String, Function<String, String>>>`, and the call `greet.apply("Hello").apply(", World").apply("!")` threads the three arguments through three nested lambdas, producing the final `String`. The result is then written to `hello.txt` via a try-with-resources `FileWriter`, with a brief confirmation echoed to `stdout`. Currying is a hallmark of functional languages like Haskell; this entry demonstrates it idiomatically in modern Java using nested `Function` types, with the filesystem as the durable destination.

## Source Code

`Main.java`:

```java
import java.io.*;
import java.util.function.*;
public class Main {
    public static void main(String[] args) throws Exception {
        Function<String, Function<String, Function<String, String>>> greet =
            a -> b -> c -> a + b + c;
        String result = greet.apply("Hello").apply(", World").apply("!");
        try (FileWriter fw = new FileWriter("hello.txt")) { fw.write(result); }
        System.out.println("Written to hello.txt");
    }
}
```

## Run

```bash
cd hello-worlds/java/0167-functional-currying-file-contemporary
javac Main.java
java Main
```

After running, a file `hello.txt` will appear next to `Main.java` containing `Hello, World!`, and a `Written to hello.txt` confirmation will be printed to `stdout`.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 8+) |
| paradigm | `functional` | Curried `Function` chain returning functions |
| output | `file` | Greeting written to `hello.txt`; `stdout` is only a verification echo |
| platform | `cli` | Runs as a command-line application |
| era | `contemporary` | Nested `Function` currying + try-with-resources (Java 8–17, contemporary) |
| tags | `[]` | No special technique worth indexing beyond currying |

## Reference

- [java.util.function.Function (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/function/Function.html)
- [java.io.FileWriter (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/io/FileWriter.html)
