---
id: 0144
language: java
paradigm: procedural
output: stdout
platform: embedded
era: vintage
tags: []
notes: "Java ME (Micro Edition) MIDlet style; simulates a J2ME app printing to a mock display."
author: ChidcGithub
date: 2026-07-20
---

# #0144 · Java ME (MIDlet)

## Description

A Java ME (Micro Edition) style Hello World structured as a MIDlet. On a real J2ME device the `startApp()` lifecycle callback would create a `Form`, append the greeting string to it, and have the device's `Display` render it on the handset screen. Because the `javax.microedition.*` APIs are not part of a standard desktop JDK, the MIDlet base class, `Display`, and `Form` are mocked out inline so the file compiles and runs with an ordinary `javac`/`java`. The mock `Form.append` prints `[MIDlet Display]: Hello, World!` to standard output so the call flow can be verified locally; the logical platform is embedded.

## Source Code

`Main.java`:

```java
// Mock J2ME / MIDP APIs so the file compiles with a standard JDK.
// On a real device these classes would come from javax.microedition.midlet / lcdui.
class MIDlet {
    protected void startApp() {}
    protected void pauseApp() {}
    protected void destroyApp(boolean unconditional) {}
}

class Display {
    static void getDisplay(MIDlet m) {}
}

class Form {
    Form(String title) {}
    void append(String s) {
        // Real MIDP would render this on the device screen; we mock-print to stdout.
        System.out.println("[MIDlet Display]: " + s);
    }
}

public class Main extends MIDlet {
    @Override
    protected void startApp() {
        Form f = new Form("Hello");
        f.append("Hello, World!");
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.startApp();
    }
}
```

## Run

```bash
cd hello-worlds/java/0144-embedded-javame
javac Main.java
java Main
```

Output: `[MIDlet Display]: Hello, World!`

On a real Java ME device the same `startApp()` body would push the greeting onto the handset's display instead of stdout.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK / J2ME) |
| paradigm | `procedural` | Lifecycle callback invokes sequential statements |
| output | `stdout` | Mock prints to stdout (real device would use the handset display) |
| platform | `embedded` | Targets Java ME MIDlets on embedded / mobile devices |
| era | `vintage` | J2ME MIDP 1.0 shipped in 2000 — late vintage era |
| tags | `[]` | No special technique tag |

## Reference

- [MIDlet (Oracle Java ME docs)](https://docs.oracle.com/javame/config/cldc/ref-impl/midp2.0/jsr118/javax/microedition/midlet/MIDlet.html)
- J2ME / MIDP 1.0 specification (JSR 37, 2000).
