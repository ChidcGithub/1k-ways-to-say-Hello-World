# 1k-ways-to-say-Hello-World

> A collaborative collection of **1,000 different ways** to write "Hello, World!" — a living archive of programming languages, paradigms, platforms, and the creativity of code.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](docs/CONTRIBUTING.md)
[![Hello Worlds](https://img.shields.io/badge/Hello%20Worlds-0%2F1000-blue)](#)
[![GitHub stars](https://img.shields.io/github/stars/ChidcGithub/1k-ways-to-say-Hello-World)](https://github.com/ChidcGithub/1k-ways-to-say-Hello-World/stargazers)
[![GitHub repo size](https://img.shields.io/github/repo-size/ChidcGithub/1k-ways-to-say-Hello-World)](https://github.com/ChidcGithub/1k-ways-to-say-Hello-World)
[![Last commit](https://img.shields.io/github/last-commit/ChidcGithub/1k-ways-to-say-Hello-World)](https://github.com/ChidcGithub/1k-ways-to-say-Hello-World/commits)
[![Languages count](https://img.shields.io/github/languages/count/ChidcGithub/1k-ways-to-say-Hello-World)](https://github.com/ChidcGithub/1k-ways-to-say-Hello-World)
[![Good first issues](https://img.shields.io/github/issues/ChidcGithub/1k-ways-to-say-Hello-World/good%20first%20issue?label=good%20first%20issue)](https://github.com/ChidcGithub/1k-ways-to-say-Hello-World/issues)
[![Made with Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)](https://www.markdownguide.org/)

`1k-ways-to-say-Hello-World` is an open, collaborative code collection aimed at gathering **1,000 distinct** "Hello, World!" implementations. More than a programmer's stamp album, it is a living archive that records the evolution of languages, the contrast between paradigms, the diversity of runtimes, and the boundless creativity people summon when expressing the very same sentence in code.

Whether you are a beginner looking for a friendly first PR, a polyglot chasing obscure languages, or a code artist crafting obfuscated one-liners — there is a slot here for you.

---

## Table of Contents

- [Features](#features)
- [Repository Structure](#repository-structure)
- [Installation](#installation)
- [Quick Start](#quick-start)
- [Documentation](#documentation)
- [Examples](#examples)
- [Categorization (How We Tell Hello Worlds Apart)](#categorization-how-we-tell-hello-worlds-apart)
- [Configuration](#configuration)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [Contributors](#contributors)
- [License](#license)

---

## Features

- **1,000 Hello Worlds under one roof** — A single, searchable archive spanning mainstream, vintage, and esoteric languages.
- **6-dimension taxonomy** — Every entry is tagged by language, paradigm, output medium, platform, era, and special technique, so you can find exactly the slice you want.
- **Same language, multiple entries** — Python OOP, Python functional, Python code-golf all coexist. Diversity within a language is celebrated.
- **Cultural preservation** — A home for Cold War–era FORTRAN, 8-instruction Brainfuck, and everything in between.
- **Code as art** — Dedicated tags for `obfuscated`, `quine`, `ascii-art`, `polyglot`, and `code-golf` pieces.
- **Beginner-friendly** — Each entry is a tiny, self-contained, runnable example — perfect for a first open-source PR.
- **Runnable by design** — Every entry ships with the exact command to run it.

---

## Repository Structure

```
1k-ways-to-say-Hello-World/
├── README.md                      # Project overview (this file)
├── LICENSE                        # MIT license
├── .gitignore
├── docs/
│   ├── CATEGORIZATION.md          # Full taxonomy: how to distinguish Hello Worlds
│   ├── CONTRIBUTING.md            # How to submit a new entry
│   └── ENTRY_TEMPLATE.md          # Copy-paste template for a new entry
└── hello-worlds/                  # All Hello World implementations
    ├── 0001-python-classic/
    │   ├── README.md              # Entry metadata + run instructions
    │   └── main.py
    ├── 0002-c-stdio/
    │   ├── README.md
    │   └── main.c
    └── ...
```

Each Hello World lives in its own folder `hello-worlds/<id>-<short-name>/` and ships a minimal `README.md` so entries can be browsed, compared, and run independently.

---

## Installation

This project is a **read-and-run collection**, not a library. There is nothing to install globally — you only need the toolchain required by the specific entry you want to run.

### Requirements

- **Git** to clone the repository.
- A language runtime or compiler for the entry you pick (e.g. `python`, `gcc`, `node`, `rustc`).
- (Optional) **GitHub CLI (`gh`)** if you want to open a PR from the command line.

### Steps

```bash
git clone https://github.com/ChidcGithub/1k-ways-to-say-Hello-World.git
cd 1k-ways-to-say-Hello-World
```

That's it — pick an entry from `hello-worlds/` and follow its `README.md`.

---

## Quick Start

Browse the [`hello-worlds/`](hello-worlds/) folder, then run any entry using the command documented inside it:

```bash
# Example: run the Python classic entry
cd hello-worlds/0001-python-classic
python main.py
# => Hello, World!
```

```bash
# Example: run the C stdio entry
cd hello-worlds/0002-c-stdio
gcc main.c -o hello && ./hello
# => Hello, World!
```

---

## Documentation

| Document | What it covers |
|----------|----------------|
| [docs/CATEGORIZATION.md](docs/CATEGORIZATION.md) | The full 6-dimension taxonomy and the rule for deciding whether two Hello Worlds count as "different". |
| [docs/CONTRIBUTING.md](docs/CONTRIBUTING.md) | Step-by-step guide to adding a new entry and opening a PR. |
| [docs/ENTRY_TEMPLATE.md](docs/ENTRY_TEMPLATE.md) | Copy-paste template (with YAML front matter) for a new entry. |

---

## Examples

A single project, many shapes of "Hello". The two simplest entries are shown below; browse [`hello-worlds/`](hello-worlds/) for the full variety.

### Python classic

```python
# 0001-python-classic/main.py
print("Hello, World!")
```

```bash
cd hello-worlds/0001-python-classic
python main.py
# => Hello, World!
```

### C stdio

```c
// 0002-c-stdio/main.c
#include <stdio.h>
int main(void) { printf("Hello, World!\n"); return 0; }
```

```bash
cd hello-worlds/0002-c-stdio
gcc main.c -o hello && ./hello
# => Hello, World!
```

> Want a flavor we haven't listed? Open an issue — or better, open a PR.

---

## Categorization (How We Tell Hello Worlds Apart)

Every entry is tagged along **6 orthogonal dimensions**. Two entries are considered *different* (and may coexist) if they differ in **any** of them.

| Dimension | Example values |
|-----------|----------------|
| **Language** (`language`) | `python`, `c`, `rust`, `brainfuck`, `assembly-x86` |
| **Paradigm** (`paradigm`) | `procedural`, `oop`, `functional`, `logic`, `esoteric` |
| **Output medium** (`output`) | `stdout`, `gui`, `web`, `audio`, `ascii-art`, `led` |
| **Platform** (`platform`) | `cli`, `browser`, `mobile`, `embedded`, `cloud`, `wasm` |
| **Era** (`era`) | `vintage` (≤1980), `classic` (1981–2000), `modern` (2001–2020), `contemporary` (2021–) |
| **Special technique** (`tags`) | `one-liner`, `code-golf`, `obfuscated`, `quine`, `polyglot`, `ascii-art` |

Full rules (including how to handle multi-language entries, version dialects, and tie-breaking) live in [docs/CATEGORIZATION.md](docs/CATEGORIZATION.md).

> IDs start at `#0001` and aim for `#1000`. Same language can appear many times — as long as the paradigm, output, platform, era, or technique differs.

---

## Configuration

There is no application configuration. The only "config" in this repo is per-entry metadata, declared as YAML front matter inside each entry's `README.md`:

```yaml
---
id: 0042
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Uses a closure invoked immediately"
author: your-github-username
date: 2026-07-20
---
```

Field names are fixed; do not invent new ones. If you need a new dimension, open an issue first so it can be added to [docs/CATEGORIZATION.md](docs/CATEGORIZATION.md).

---

## Troubleshooting

| Symptom | Likely cause | Fix |
|---------|--------------|-----|
| `command not found: python` / `gcc` / `node` … | Required runtime not installed | Install the toolchain named in the entry's `README.md` |
| Entry folder is empty or missing files | Incomplete entry | Open an issue referencing the entry ID |
| PR rejected as "duplicate" | Same 6-dimension signature as an existing entry | Tweak at least one dimension (e.g. add a `tag`, change `output`) — see [CATEGORIZATION.md](docs/CATEGORIZATION.md) |
| `gh repo create` fails with 403 | GitHub CLI not authenticated, or lacking `repo` scope | Run `gh auth login` and ensure the `repo` scope is granted |
| LF/CRLF warnings on Windows | Line-ending mismatch (harmless) | `git config core.autocrlf true` to silence |
| Badge shows `0/1000` forever | The count is manual for now | It will be updated as entries land — feel free to open a PR to automate it |

---

## Contributing

Contributions are **very welcome** — this project literally cannot reach 1,000 without you.

### Add a new Hello World in 5 steps

1. **Read the rules** — [docs/CATEGORIZATION.md](docs/CATEGORIZATION.md) tells you what counts as "different".
2. **Pick the next free ID** — open [`hello-worlds/`](hello-worlds/), find the highest `N`, use `N+1` (zero-padded to 4 digits, e.g. `0042`).
3. **Copy the template** — start from [docs/ENTRY_TEMPLATE.md](docs/ENTRY_TEMPLATE.md).
4. **Verify locally** — make sure your code actually prints `Hello, World!` using the command in your `README.md`.
5. **Open a PR** — branch `add-0042-<language>-<short-name>`, title `Add #0042: <language> - <short description>`.

### Code style

- **Minimal** — only "Hello, World!", no bonus features.
- **Readable by default** — unless a `tag` like `obfuscated` or `code-golf` justifies otherwise.
- **Prefer the standard library** — avoid third-party dependencies when possible.
- **Comments** — match the language of the surrounding file (English or Chinese, just stay consistent within a file).

Full guidelines: [docs/CONTRIBUTING.md](docs/CONTRIBUTING.md).

---

## Contributors

Thank you to everyone moving this project closer to 1,000.

<a href="https://github.com/ChidcGithub/1k-ways-to-say-Hello-World/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=ChidcGithub/1k-ways-to-say-Hello-World" />
</a>

---

## License

Released under the [MIT License](LICENSE). Every Hello World entry inherits the same license by default; if an entry must preserve its original author's terms, state so explicitly in that entry's `README.md`.
