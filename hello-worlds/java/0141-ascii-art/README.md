---
id: 0141
language: java
paradigm: procedural
output: ascii-art
platform: cli
era: modern
tags: [ascii-art]
notes: "Prints 'Hello, World!' as multi-line ASCII art banner."
author: ChidcGithub
date: 2026-07-20
---

# #0141 · Java ASCII Art

## Description

Prints the words `HELLO WORLD` as a three-line ASCII art banner built from `#` characters. Each letter is five columns wide and three rows tall; letters within a word are separated by a single space, and the two words are separated by a three-column gap. The banner is stored as a hard-coded `String[]` array of three rows and emitted with a simple `for` loop.

## Source Code

`Main.java`:

```java
public class Main {
    public static void main(String[] args) {
        String[] banner = {
            "#   # ##### #     #      ###    #   #  ###   ####  #     #### ",
            "#   # #     #     #     #   #   # # # #   # #  #  #     #   #",
            "##### ##### ##### #####  ###    #   #  ###   # ##  ##### #### "
        };
        for (String line : banner) {
            System.out.println(line);
        }
    }
}
```

## Rendered Output

```
#   # ##### #     #      ###    #   #  ###   ####  #     ####
#   # #     #     #     #   #   # # # #   # #  #  #     #   #
##### ##### ##### #####  ###    #   #  ###   # ##  ##### ####
```

Each letter is a 5×3 block:

| Letter | Top    | Middle | Bottom    |
|--------|--------|--------|-----------|
| H      | `#   #`| `#   #`| `#####`   |
| E      | `#####`| `#    `| `#####`   |
| L      | `#    `| `#    `| `#####`   |
| O      | ` ### `| `#   #`| ` ### `   |
| W      | `#   #`| `# # #`| `#   #`   |
| R      | `#### `| `#  # `| `# ## `   |
| D      | `#### `| `#   #`| `#### `   |

## Run

```bash
cd hello-worlds/java/0141-ascii-art
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `procedural` | Static method iterating over a string array |
| output | `ascii-art` | The visible artifact is a character-art banner |
| platform | `cli` | Run from the terminal |
| era | `modern` | Enhanced for-loop (Java 5, 2004) |
| tags | `[ascii-art]` | Letterforms rendered with `#` characters |

## Reference

- Wikipedia: [ASCII art](https://en.wikipedia.org/wiki/ASCII_art)
- FIGlet font format — inspiration for fixed-width 5×3 letterforms.
