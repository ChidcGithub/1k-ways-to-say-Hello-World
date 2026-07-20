---
id: 0152
language: java
paradigm: oop
output: stderr
platform: cli
era: modern
tags: []
notes: "Builder pattern constructs greeting; outputs to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0152 · Java OOP Builder Stderr

## Description

A `GreeterBuilder` accumulates greeting fragments via fluent `add(...)` calls that return `this` for chaining, then emits the assembled string to `System.err`. The Builder pattern is classic OOP design; routing output to stderr instead of stdout distinguishes this entry from the textbook form.

## Source Code

`Main.java`:

```java
public class Main {
    static class GreeterBuilder {
        private String greeting = "";
        public GreeterBuilder add(String s) { greeting += s; return this; }
        public void build() { System.err.println(greeting); }
    }
    public static void main(String[] args) { new GreeterBuilder().add("Hello").add(", ").add("World!").build(); }
}
```

## Run

```bash
cd hello-worlds/java/0152-oop-builder-stderr
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Builder pattern with fluent chaining |
| output | `stderr` | Output via `System.err.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | Fluent builder idiom popularized in modern Java (2000s+) |
| tags | `[]` | Standard builder pattern; output stream is the only twist |

## Reference

- Gamma et al.: *Design Patterns* (Builder).
- `java.lang.System.err` (Java SE).
