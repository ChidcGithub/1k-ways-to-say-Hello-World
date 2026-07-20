---
id: 0160
language: java
paradigm: oop
output: gui
platform: desktop-gui
era: classic
tags: []
notes: "Mock Swing JFrame with JLabel showing 'Hello, World!' (no real Swing dependency)."
author: ChidcGithub
date: 2026-07-20
---

# #0160 · Java OOP GUI Swing

## Description

A mock Swing Hello World that constructs a fake `JFrame`, sets its title and size, adds a `JLabel`, and finally calls `setVisible(true)`. The mock `JFrame.setVisible` prints the greeting to `stdout` to emulate the rendering of a real Swing window — no real Swing dependency is required. The logical output is GUI (a window with a label), and the entry stays in the classic era because Swing is a pre-2000 Java 1.2 toolkit.

## Source Code

`Main.java`:

```java
public class Main {
    static class JFrame { void setTitle(String t){} void add(Object c){} void setVisible(boolean b){ System.out.println("[Swing JFrame]: Hello, World!"); } void setSize(int w,int h){} }
    static class JLabel { JLabel(String s){} }
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setTitle("Hello");
        frame.add(new JLabel("Hello, World!"));
        frame.setSize(300, 200);
        frame.setVisible(true);
    }
}
```

## Run

```bash
cd hello-worlds/java/0160-oop-gui-swing
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Object composition: a `JFrame` aggregating a `JLabel` |
| output | `gui` | Logically renders a window with a label (mock printed for safety) |
| platform | `desktop-gui` | Swing targets the desktop GUI platform |
| era | `classic` | Swing shipped with Java 1.2 (1998), inside the 1981–2000 classic era |
| tags | `[]` | No special technique worth indexing |

## Reference

- [How to Make Frames (Swing tutorial)](https://docs.oracle.com/javase/tutorial/uiswing/components/frame.html)
- [javax.swing.JFrame (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.desktop/javax/swing/JFrame.html)
