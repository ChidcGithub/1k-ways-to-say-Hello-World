---
id: 0358
language: bash
paradigm: procedural
output: gui
platform: desktop-gui
era: classic
tags: []
notes: "Uses dialog to display Hello World in a TUI dialog box."
author: ChidcGithub
date: 2026-07-20
---

# #0358 · Bash Dialog-GUI

## Description

Hello World in a terminal dialog box using the dialog command.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
dialog --msgbox "Hello, World!" 6 20
```

## Run

```bash
cd hello-worlds/bash/0358-dialog-gui
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential call to dialog for TUI output |
| output | `gui` | Output goes to gui |
| platform | `desktop-gui` | Runs in a desktop-gui context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Uses dialog to display Hello World in a TUI dialog box. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
