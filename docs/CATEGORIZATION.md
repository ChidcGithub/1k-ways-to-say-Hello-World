# 分类体系：如何区分不同的 "Hello, World!"

本文件定义 `1k-ways-to-say-Hello-World` 项目的分类规则。每个 Hello World 条目必须可被 **唯一且可重复地** 归类，避免同一实现被重复收录、也方便读者按维度检索。

---

## 设计原则

1. **正交性**：六个维度彼此独立，互不重叠语义。
2. **可枚举**：每个维度有固定的取值集合，不允许自由填空（避免分裂成无穷多类）。
3. **最小够用**：只保留对"区分 Hello World"真正有信息量的维度，不堆砌元数据。
4. **同一语言可多次出现**：Python 的 OOP 版、函数式版、Code Golf 版算三个不同条目。

---

## 六大分类维度

### 1. 语言 (language)

条目所使用的**主要编程语言**或**指令集**。

- 取值用 kebab-case 小写：`python`, `c`, `c++`, `c-sharp`, `javascript`, `typescript`, `java`, `rust`, `go`, `ruby`, `swift`, `kotlin`, `haskell`, `lisp`, `prolog`, `assembly-x86`, `assembly-arm`, `brainfuck`, `whitespace`, `malbolge` …
- 若是某语言的方言/版本，用 `@` 标注：`python@2.7`、`javascript@es6`。
- 若一个条目混合多语言（如 HTML+JS），取**主体逻辑所在语言**，其余在 `notes` 中说明。

### 2. 范式 (paradigm)

条目所采用的**编程范式**。取值集合：

| 取值 | 含义 | 典型特征 |
|------|------|----------|
| `procedural` | 过程式 | 顺序语句、子过程、共享状态 |
| `oop` | 面向对象 | 类、对象、消息传递 |
| `functional` | 函数式 | 纯函数、不可变、高阶函数 |
| `logic` | 逻辑式 | 规则、事实、 unify/回溯 |
| `declarative` | 声明式 | 描述"是什么"而非"怎么做"（HTML、SQL、正则） |
| `concatenative` | 连接式 | 后缀/栈式（Forth、PostScript、factor） |
| `array` | 数组式 | 整体操作数组（APL、J、k） |
| `reactive` | 响应式 | 数据流、信号、订阅 |
| `generic` | 泛型 | 模板/泛型类型参数化（C++ templates、Java generics、C macros） |
| `meta` | 元编程 | 编译期代码生成（C 预处理、C++ constexpr/模板元编程） |
| `concurrent` | 并发 | 多线程/协程协作（pthread、std::thread、Java Thread） |
| `esoteric` | 玩具/Esoteric 语言范式 | brainfuck 等仅 8 条指令、由语言本身决定 |

### 3. 输出媒介 (output)

"Hello, World!" **最终到达用户感官的载体**。

| 取值 | 含义 |
|------|------|
| `stdout` | 控制台标准输出 |
| `stderr` | 标准错误流 |
| `gui` | 图形界面窗口/对话框 |
| `web` | 浏览器渲染的网页 |
| `audio` | 声音（TTS、合成音、蜂鸣） |
| `ascii-art` | ASCII 艺术字图案 |
| `image` | 生成的位图/矢量图 |
| `led` | LED 灯、点阵屏 |
| `serial` | 串口/硬件输出 |
| `network` | 网络包/HTTP 响应 |
| `file` | 写入文件 |

> 同一条目可标多个输出媒介（如先写文件再 stdout 打印），但**主输出**只取一个，放第一位。

### 4. 运行平台 (platform)

| 取值 | 含义 |
|------|------|
| `cli` | 命令行（任意 OS） |
| `browser` | Web 浏览器 |
| `mobile` | iOS / Android |
| `embedded` | 单片机、嵌入式设备 |
| `cloud` | Serverless / 云函数 |
| `desktop-gui` | 桌面图形应用 |
| `mainframe` | 大型机 |
| `wasm` | WebAssembly 运行时 |
| `bare-metal` | 无 OS 裸机 |

### 5. 年代 (era)

按**该 Hello World 实现所使用的语言/特性的诞生年代**划分，而非条目提交时间。

| 取值 | 时间区间 | 含义 |
|------|----------|------|
| `vintage` | ≤ 1980 | 远古语言：FORTRAN、LISP、COBOL、ALGOL、汇编早期 |
| `classic` | 1981 – 2000 | 经典时代：C/C++、Java、Perl、Python 早期、Ruby |
| `modern` | 2001 – 2020 | 现代时代：Go、Rust、Swift、Kotlin、TypeScript |
| `contemporary` | 2021 – 至今 | 当代：最新语言特性、Mojo、Bend、Gleam 等 |

### 6. 特殊技巧 (tags)

可多选，用于标记**值得单独检索的写法特征**。取值（可扩展，但需先在此文件登记）：

| 取值 | 含义 |
|------|------|
| `one-liner` | 单行实现 |
| `code-golf` | 极致压缩字符数 |
| `obfuscated` | 故意混淆，难读 |
| `quine` | 自产生程序（输出自身源码 + Hello World） |
| `ascii-art` | 用字符拼出 Hello World 字样 |
| `polyglot` | 同一份源码可在多种语言运行 |
| `self-hosted` | 不依赖外部运行时，从引导开始 |
| `parallel` | 多线程/多进程协作输出 |
| `distributed` | 多节点协作 |
| `shader` | GPU 着色器实现 |
| `ai-generated` | 由 LLM 生成 |
| `hand-assembled` | 手写机器码/字节码 |

---

## 条目元数据格式

每个条目的 `README.md` 头部使用 YAML front matter 标注：

```yaml
---
id: 0042
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "使用 println! 宏与闭包"
author: your-github-username
date: 2026-07-20
---
```

---

## 判定规则：怎样算"不同的 Hello World"？

两个条目被视为**不同**（可同时收录），当且仅当满足以下任一条件：

1. **语言不同**：`python` ≠ `rust`。
2. **范式不同**：同为 Python，但 OOP 版 ≠ 函数式版。
3. **输出媒介不同**：同为 C，但 `stdout` 版 ≠ `gui` 版（GTK 弹窗）。
4. **运行平台不同**：同为 C，但 `cli` 版 ≠ `embedded` 版（STM32 串口）。
5. **特殊技巧不同**：同为 Perl，但 `one-liner` 版 ≠ `obfuscated` 版。
6. **年代特征显著不同**：同语言但使用了截然不同时代的特性（如 Python 2 `print` 语句 vs Python 3.8 walrus 表达式）。

> 仅"代码风格略有不同"（变量名、空格）**不**算不同条目。

---

## 编号规则

- 编号从 `0001` 起，连续占用，不跳号。
- 编号一经分配不再变更，即使条目被删除也保留空号。
- 命名格式：`<编号>-<语言>-<短描述>`，例如 `0042-rust-one-liner`。

---

## 检索示例

按维度查找条目时，可使用以下伪查询语义：

- 所有 `language=brainfuck` 的条目 → Esoteric 语言专区。
- 所有 `output=ascii-art` 的条目 → 视觉系 Hello World。
- 所有 `tags=obfuscated` 的条目 → 难读但能跑的代码艺术。
- 所有 `platform=embedded` 的条目 → 硬核嵌入式 Hello World。
- 组合：`language=c AND output=gui AND era=classic` → 经典 C 时代的 GUI 弹窗实现。

---

## 扩展分类维度（提案中）

以下维度暂未纳入正式分类，但可在 `notes` 中记录：

- **代码行数**（LOC）
- **依赖大小**（是否需第三方库）
- **是否可逆**（输出能否反推源码）
- **能耗**（嵌入式场景下的功耗）

如需新增正式维度，请先开 Issue 讨论，达成共识后更新本文件。
