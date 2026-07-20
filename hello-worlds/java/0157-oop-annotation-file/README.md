---
id: 0157
language: java
paradigm: oop
output: file
platform: cli
era: modern
tags: []
notes: "Custom annotation marks the greeting method; writes to file."
author: ChidcGithub
date: 2026-07-20
---

# #0157 · Java OOP Annotation File

## Description

A custom `@GreetingMethod` annotation is retained at runtime (`RetentionPolicy.RUNTIME`) to mark the greeting producer `getGreeting()`. The `main` method invokes the annotated method, then writes its return value to `hello.txt` via a try-with-resources `FileWriter`. Annotations are a core OOP/extensibility feature in modern Java.

## Source Code

`Main.java`:

```java
import java.io.*;
import java.lang.annotation.*;
@Retention(RetentionPolicy.RUNTIME) @interface GreetingMethod {}
public class Main {
    @GreetingMethod
    public static String getGreeting() { return "Hello, World!"; }
    public static void main(String[] args) throws Exception {
        String msg = getGreeting();
        try (FileWriter fw = new FileWriter("hello.txt")) { fw.write(msg); }
        System.out.println("Written to hello.txt");
    }
}
```

## Run

```bash
cd hello-worlds/java/0157-oop-annotation-file
javac Main.java
java Main
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 5+) |
| paradigm | `oop` | Custom annotation type marking a method |
| output | `file` | Writes `hello.txt`; stdout only confirms |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | Annotations added in Java 5 (2004); try-with-resources in Java 7 |
| tags | `[]` | Annotation usage; no obfuscation or one-liner |

## Reference

- [Java Annotations Tutorial (Oracle)](https://docs.oracle.com/javase/tutorial/java/annotations/)
- JEP 213: Milling Project Coin — try-with-resources (Java 7).
