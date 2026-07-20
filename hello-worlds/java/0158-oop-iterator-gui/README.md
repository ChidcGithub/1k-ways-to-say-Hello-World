---
id: 0158
language: java
paradigm: oop
output: stdout
platform: desktop-gui
era: modern
tags: []
notes: "Mock Swing-style JFrame with Iterator; simulates a GUI label showing greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0158 · Java OOP Iterator GUI

## Description

A mock Swing-style entry that combines an Iterator pattern with a fake `JLabel`. A custom `Iterator<T>` interface is implemented by `CharIterator`, which walks the characters of `"Hello, World!"` one at a time. The reconstructed string is handed to a mock `JLabel` whose `show()` prints the label's text to `stdout`. The logical platform is desktop-gui (the Swing idiom), while the physical output is `stdout` because no real Swing dependency is used.

## Source Code

`Main.java`:

```java
public class Main {
    interface Iterator<T> { boolean hasNext(); T next(); }
    static class CharIterator implements Iterator<Character> {
        private final String s; private int i = 0;
        CharIterator(String s) { this.s = s; }
        public boolean hasNext() { return i < s.length(); }
        public Character next() { return s.charAt(i++); }
    }
    static class JLabel { JLabel(String s){} void show(){ System.out.println("[Swing JLabel]: Hello, World!"); } }
    public static void main(String[] args) {
        CharIterator it = new CharIterator("Hello, World!");
        StringBuilder sb = new StringBuilder();
        while (it.hasNext()) sb.append(it.next());
        new JLabel(sb.toString()).show();
    }
}
```

## Run

```bash
cd hello-worlds/java/0158-oop-iterator-gui
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Custom iterator interface, inner classes, and a mock JLabel model |
| output | `stdout` | Output via `System.out.println` inside the mock label |
| platform | `desktop-gui` | Mimics the Swing JFrame/JLabel GUI idiom |
| era | `modern` | Generic interface and modern Iterator styling |
| tags | `[]` | No special technique worth indexing |

## Reference

- [java.util.Iterator (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/Iterator.html)
- [How to Use Labels (Swing tutorial)](https://docs.oracle.com/javase/tutorial/uiswing/components/label.html)
