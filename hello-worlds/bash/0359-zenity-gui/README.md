---
id: 0359
language: bash
paradigm: procedural
output: gui
platform: desktop-gui
era: classic
tags: []
notes: "Uses zenity to display Hello World in a GTK dialog box."
author: ChidcGithub
date: 2026-07-20
---

# #0359 · Bash Zenity-GUI

## Description

Hello World in a GTK dialog using zenity.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
zenity --info --text="Hello, World!" --title="Greeting"
```

## Run

```bash
cd hello-worlds/bash/0359-zenity-gui
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential call to zenity for GTK dialog |
| output | `gui` | Output goes to gui |
| platform | `desktop-gui` | Runs in a desktop-gui context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Uses zenity to display Hello World in a GTK dialog box. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
