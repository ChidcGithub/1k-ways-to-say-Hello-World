---
id: 0139
language: java
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [quine]
notes: "A Java quine that prints its own source, then prints 'Hello, World!' on the next line."
author: ChidcGithub
date: 2026-07-20
---

# #0139 · Java Quine

## Description

A self-reproducing Java program. When run, the `printf` call writes out a byte-for-byte copy of the program's own source code to standard output, and the following `println` then writes the greeting `Hello, World!` on the next line. The trick is the classic "string contains itself" pattern: the format string `s` holds a template of the entire source with `%c`/`%s` placeholders standing in for the characters that would otherwise have to be escaped (newline = `10`, double-quote = `34`) and for the string's own value (`%s`).

## Source Code

`Main.java`:

```java
public class Main{
    public static void main(String[]a){
        String s="public class Main{%c    public static void main(String[]a){%c        String s=%c%s%c;%c        System.out.printf(s,10,10,34,s,34,10,10,34,34,10,10);%c        System.out.println(%cHello, World!%c);%c    }%c}";
        System.out.printf(s,10,10,34,s,34,10,10,34,34,10,10);
        System.out.println("Hello, World!");
    }
}
```

## How the Quine Works

The format string `s` is a literal template of the source file. Each `%c` in the template is a stand-in for a character that cannot be written verbatim inside a Java string literal:

- `10` → newline (`\n`)
- `34` → double-quote (`"`)
- `%s` → the value of `s` itself (recursively substituted by `printf`)

The 11 arguments to `printf` are, in order: `10, 10, 34, s, 34, 10, 10, 34, 34, 10, 10`. They expand the template back into the original source code, including the line that contains the string literal (because the `%s` slot is filled by `s`, which is the template itself). The trailing `System.out.println("Hello, World!")` then appends the greeting on a new line.

## Run

```bash
cd hello-worlds/java/0139-quine
javac Main.java
java Main
```

Expected output: the program's own source, followed by `Hello, World!` on the last line.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `procedural` | Single static method, no objects |
| output | `stdout` | Output via `System.out.printf` / `println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | Uses `printf` varargs (Java 5, 2004) |
| tags | `[quine]` | Self-reproducing program |

## Reference

- Wikipedia: [Quine (computing)](https://en.wikipedia.org/wiki/Quine_(computing))
- Java `String.format` / `printf` format string specification.
