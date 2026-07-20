---
id: 0008
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "POSIX-friendly; uses echo builtin. Bash 1.0 (1989) lands in the classic era."
author: ChidcGithub
date: 2026-07-20
---

# #0008 · Bash Script

## Description

A Hello World shell script using `echo`. The script begins with a `#!/usr/bin/env bash` shebang line so it can be executed directly once the file is marked executable, and the body consists of a single `echo` builtin call that writes the greeting to standard output followed by a newline. POSIX-friendly and idiomatic for shell scripting.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!"
```

## Run

```bash
cd hello-worlds/0008-bash-script
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Written as a Bash shell script |
| paradigm | `procedural` | A single sequential statement invoking the `echo` builtin |
| output | `stdout` | `echo` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line shell |
| era | `classic` | Bash 1.0 was released in 1989, falling in the 1981–2000 classic era |
| tags | `[]` | Canonical baseline; no special technique worth indexing |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
