# 1k-ways-to-say-Hello-World

> 收集 1000 种不同的 "Hello, World!" 写法，探索编程语言、范式、平台与创意的多样性。

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](docs/CONTRIBUTING.md)
[![Hello Worlds](https://img.shields.io/badge/Hello%20Worlds-0%2F1000-blue)](#)

## 项目简介

`1k-ways-to-say-Hello-World` 是一个开放协作的代码集合项目，目标是汇集 **1000 种** 形形色色的 "Hello, World!" 实现。它不仅是程序员的"集邮册"，更是一份活态档案——记录编程语言的演化、编程范式的差异、运行平台的多样，以及人类用代码表达同一句话时所迸发出的无穷创造力。

### 为什么做这个项目？

- **学习价值**：通过对比同一目标的多种实现，直观感受语言与范式之间的差异。
- **文化存档**：保存冷门语言、历史语言、Esoteric 语言（brainfuck、Whitespace 等）的样例。
- **创意表达**：用 Obfuscated Code、Code Golf、ASCII Art、Quine 等特殊技巧展示代码的艺术性。
- **入门友好**：每个条目都是独立、可运行的小例子，非常适合作为初学者的第一个 PR。

---

## 仓库结构

```
1k-ways-to-say-Hello-World/
├── README.md                      # 项目说明（本文件）
├── LICENSE                        # MIT 许可证
├── .gitignore
├── docs/
│   ├── CATEGORIZATION.md          # 分类体系说明（如何区分不同的 Hello World）
│   ├── CONTRIBUTING.md            # 贡献指南
│   └── ENTRY_TEMPLATE.md          # 单个 Hello World 条目模板
└── hello-worlds/                  # 所有 Hello World 实现的源代码
    ├── 0001-python-classic/
    │   ├── README.md
    │   └── main.py
    ├── 0002-c-stdio/
    │   ├── README.md
    │   └── main.c
    └── ...
```

每个 Hello World 实现都独立存放在 `hello-worlds/<编号>-<短名>/` 目录下，自带一个最小化的 `README.md`，便于检索与对比。

---

## 分类体系（速览）

完整的分类规则见 [docs/CATEGORIZATION.md](docs/CATEGORIZATION.md)。每个条目使用 **6 个维度** 进行标注：

| 维度 | 示例取值 |
|------|----------|
| **语言** (language) | `python`, `c`, `rust`, `brainfuck`, `assembly-x86` |
| **范式** (paradigm) | `procedural`, `oop`, `functional`, `logic`, `esoteric` |
| **输出媒介** (output) | `stdout`, `gui`, `web`, `audio`, `ascii-art` |
| **运行平台** (platform) | `cli`, `browser`, `mobile`, `embedded`, `cloud` |
| **年代** (era) | `vintage` (≤1980), `classic` (1981–2000), `modern` (2001–2020), `contemporary` (2021–) |
| **特殊技巧** (tags) | `code-golf`, `obfuscated`, `quine`, `one-liner`, `ascii-art` |

> 编号 `#0001` 起步，目标 `#1000`。同一语言可以有多个条目（只要范式/输出/技巧不同）。

---

## 快速开始

### 浏览已有实现

进入 [`hello-worlds/`](hello-worlds/) 目录，按编号或语言名查找。

### 运行某个实现

每个条目的 `README.md` 中都会注明运行方式，例如：

```bash
cd hello-worlds/0001-python-classic
python main.py
```

### 贡献一个新的 Hello World

1. 阅读 [docs/CONTRIBUTING.md](docs/CONTRIBUTING.md)。
2. 按 [docs/ENTRY_TEMPLATE.md](docs/ENTRY_TEMPLATE.md) 的模板创建新目录。
3. 在 `hello-worlds/` 下选一个未使用的编号（从 0001 开始连续占用）。
4. 提交 PR，标题格式：`Add #XXXX: <language> - <short description>`。

---

## 贡献者

感谢所有让这个项目离 1000 更近一步的人。

<a href="https://github.com/ChidcGithub/1k-ways-to-say-Hello-World/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=ChidcGithub/1k-ways-to-say-Hello-World" />
</a>

---

## 许可证

本项目采用 [MIT License](LICENSE) 开源。每个 Hello World 条目默认遵循同一许可证；如某条目需要保留原作者许可，请在条目 `README.md` 中明确注明。
