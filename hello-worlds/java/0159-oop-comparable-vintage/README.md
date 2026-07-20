---
id: 0159
language: java
paradigm: oop
output: stdout
platform: cli
era: vintage
tags: []
notes: "Vintage-style class implementing Comparable; prints greeting via compareTo logic."
author: ChidcGithub
date: 2026-07-20
---

# #0159 · Java OOP Comparable Vintage

## Description

A vintage-style OOP entry where a `Greeting` class implements `Comparable<Greeting>` and overrides `toString` so its state can be printed directly. Although `compareTo` is not exercised here, implementing the contract is the canonical vintage Java pattern for value objects that may need ordering. The greeting is emitted via `System.out.println(g)`, relying on `toString` to produce `"Hello, World!"`.

## Source Code

`Main.java`:

```java
public class Main {
    static class Greeting implements Comparable<Greeting> {
        String msg;
        Greeting(String m) { this.msg = m; }
        public int compareTo(Greeting o) { return msg.compareTo(o.msg); }
        public String toString() { return msg; }
    }
    public static void main(String[] args) {
        Greeting g = new Greeting("Hello, World!");
        System.out.println(g);
    }
}
```

## Run

```bash
cd hello-worlds/java/0159-oop-comparable-vintage
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Encapsulates state in a class implementing an interface |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Runs from the terminal |
| era | `vintage` | `Comparable` + `toString` override echoes the pre-2000 Java 1.2 idiom |
| tags | `[]` | No special technique worth indexing |

## Reference

- [java.lang.Comparable (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/lang/Comparable.html)
- [Object.toString (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/lang/Object.html#toString())
