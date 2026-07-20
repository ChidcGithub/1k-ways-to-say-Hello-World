---
id: 0166
language: java
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Uses Optional with map/orElse for monadic greeting; obfuscated via char codes."
author: ChidcGithub
date: 2026-07-20
---

# #0166 · Java Functional Optional Obfuscated

## Description

An obfuscated Hello World that hides the greeting as a raw `char[]` of ASCII codes (`72,101,108,108,111,44,32,87,111,114,108,100,33` = `"Hello, World!"`) and lifts it into an `Optional<char[]>`. The monadic `map(String::new)` converts the array into its `String` form, and `orElse("")` provides a fallback. The reader has to decode the integer literals to recover the greeting, hence the `obfuscated` tag.

## Source Code

`Main.java`:

```java
import java.util.Optional;
public class Main {
    public static void main(String[] args) {
        Optional<char[]> opt = Optional.of(new char[]{72,101,108,108,111,44,32,87,111,114,108,100,33});
        String result = opt.map(String::new).orElse("");
        System.out.println(result);
    }
}
```

## Run

```bash
cd hello-worlds/java/0166-functional-optional-obfuscated
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 8+) |
| paradigm | `functional` | `Optional` with `map` / `orElse` used as a monadic transform |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Runs from the terminal |
| era | `modern` | `Optional` is Java 8 (2014), modern era |
| tags | `[obfuscated]` | Greeting hidden behind raw ASCII char codes |

## Reference

- [java.util.Optional (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/Optional.html)
- [String(char[]) constructor (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/lang/String.html#%3Cinit%3E(char%5B%5D))
