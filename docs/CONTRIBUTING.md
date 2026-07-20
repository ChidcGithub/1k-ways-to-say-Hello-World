# Contributing

Thank you for your interest in `1k-ways-to-say-Hello-World`! Whether you want to add a Hello World in an obscure language or contribute a piece of code art, you are very welcome.

## Before You Start

1. Read [CATEGORIZATION.md](./CATEGORIZATION.md) and confirm your implementation is **genuinely different** from existing entries (see the duplicate-prevention section below).
2. Browse the [`hello-worlds/`](../hello-worlds/) directory (organized by language) and confirm your ID is not taken.
3. Make sure your code **runs locally** and has actually been tested.

---

## Preventing Duplicates — Read This First

This project's whole value depends on each entry being **distinct**. Duplicate PRs are the #1 reason for rejection, so please spend a minute checking before you write any code.

### What counts as "different"?

Two entries are considered different (and may coexist) only if they differ in **at least one** of the 6 categorization dimensions:

| Dimension | Example values |
|-----------|----------------|
| `language` | `python`, `c`, `rust`, `brainfuck` |
| `paradigm` | `procedural`, `oop`, `functional`, `logic`, `declarative`, `concatenative`, `array`, `reactive`, `esoteric` |
| `output` | `stdout`, `stderr`, `gui`, `web`, `audio`, `ascii-art`, `image`, `led`, `serial`, `network`, `file` |
| `platform` | `cli`, `browser`, `mobile`, `embedded`, `cloud`, `desktop-gui`, `mainframe`, `wasm`, `bare-metal` |
| `era` | `vintage`, `classic`, `modern`, `contemporary` |
| `tags` | `one-liner`, `code-golf`, `obfuscated`, `quine`, `ascii-art`, `polyglot`, `self-hosted`, `parallel`, `distributed`, `shader`, `ai-generated`, `hand-assembled` |

**Only code-style differences** (variable names, spacing, minor refactors) do **not** count as different.

### Duplicate-prevention checklist

Before opening a PR, tick off every item:

- [ ] I searched `hello-worlds/<my-language>/` for entries with the same `paradigm`.
- [ ] I checked whether any of those entries also share my `output` medium.
- [ ] I confirmed my `platform` differs from any matching entry (or my `tags` differ if everything else matches).
- [ ] I verified my `era` and at least one `tag` make the entry meaningfully distinct.
- [ ] I grepped the repo for keywords in my approach (e.g. `walrus`, `quine`, `tkinter`) to catch near-duplicates.
- [ ] In my PR description, I list the closest existing entry ID and explain **which dimension differs**.

If you cannot point to a dimension that differs, your entry is a duplicate — please tweak at least one dimension (e.g. change `output` from `stdout` to `stderr`, add a `tag` like `one-liner`, or pick a different `paradigm`) before submitting.

> When in doubt, open an issue first and ask. A 30-second question saves everyone a review cycle.

---

## Adding a New Hello World

### 1. Pick an ID

Open `hello-worlds/<your-language>/` and find the highest existing ID `N` across the whole repo. Use `N+1`, zero-padded to 4 digits (e.g. `0058`). IDs are global — never reset per language.

### 2. Create the Entry Folder

Naming format: `<id>-<short-name>` (no language prefix — the parent directory already encodes the language).

```
hello-worlds/rust/0058-async-tokio/
├── README.md      # Required: metadata + explanation
└── main.rs        # Required: source code (filename follows language convention)
```

If your entry needs multiple source files (e.g. HTML + JS + CSS), put them all in this folder.

### 3. Fill in README.md

Copy [`ENTRY_TEMPLATE.md`](./ENTRY_TEMPLATE.md) and fill it in. The **YAML front matter is mandatory** — it is the basis for indexing and duplicate detection.

### 4. Verify Locally

Make sure the code runs and outputs `Hello, World!` (or equivalent). Write the exact command in the `## Run` section of your entry's `README.md`.

### 5. Open a PR

- Branch name: `add-0058-rust-async-tokio`
- Commit message: `Add #0058: rust - async-tokio`
- PR title: `Add #0058: <language> - <short description>`
- In the PR description:
  - List all 6 categorization dimensions you chose.
  - Name the closest existing entry ID and state which dimension differs (see the duplicate-prevention checklist above).

## Code Style

- **Keep it minimal** — only "Hello, World!", no bonus features.
- **Readable by default** — unless a `tag` like `obfuscated` or `code-golf` justifies otherwise.
- **Prefer the standard library** — avoid third-party dependencies when possible.
- **Comments** — match the language of the surrounding file (English or Chinese, just stay consistent within a file).

## Code of Conduct

- Respect all contributors; do not belittle anyone over skill level or language preference.
- Entries containing malicious code, offensive content, or copyright infringement will not be accepted.
- Disputes about duplicates are resolved by maintainers using the rules in [CATEGORIZATION.md](./CATEGORIZATION.md).

## For Maintainers

Before merging a PR, verify:
- ID continuity (next free number, globally unique).
- Categorization metadata completeness and validity (all 6 fields, allowed values only).
- Code runs as documented.
- The duplicate-prevention checklist is filled in and the claimed difference is real.

If a duplicate slips through, leave a comment explaining which existing entry it duplicates and suggest either merging or adjusting a dimension.

Thank you for helping us reach 1,000 Hello Worlds!
