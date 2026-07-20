# 条目模板

复制以下内容到你的条目目录的 `README.md`，并替换 `<...>` 占位符。

---

```markdown
---
id: <0042>
language: <rust>
paradigm: <functional>
output: <stdout>
platform: <cli>
era: <modern>
tags: [<one-liner>]
notes: "<简短补充说明，可留空>"
author: <your-github-username>
date: <YYYY-MM-DD>
---

# #<0042> · <Rust One-Liner>

## 说明

<1-3 句话介绍这条实现的特点，以及它为何与已有条目不同。>

## 源代码

`<main.rs>`：

\`\`\`rust
fn main() {
    (|| println!("Hello, World!"))();
}
\`\`\`

## 运行方式

\`\`\`bash
cd hello-worlds/<0042-rust-one-liner>
rustc main.rs -o hello && ./hello
\`\`\`

## 分类说明

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `<rust>` | 使用 Rust 2018 |
| paradigm | `<functional>` | 使用闭包立即调用 |
| output | `<stdout>` | 通过 `println!` 输出 |
| platform | `<cli>` | 终端运行 |
| era | `<modern>` | Rust 1.0 (2015) |
| tags | `[<one-liner>]` | 核心逻辑单行 |

## 参考

- <可选：参考链接、灵感来源>
```

---

## 填写要点

1. **`id` 必须连续**：查看 `hello-worlds/` 中已有最大编号 +1。
2. **YAML 字段名固定**：不要自创字段；如需扩展先在 [CATEGORIZATION.md](./CATEGORIZATION.md) 登记。
3. **`tags` 是数组**：即使是单个 tag 也要写成 `[one-liner]`。
4. **代码块用三反引号**：在模板中已被转义，实际填写时正常使用。
5. **运行命令必须可复制即跑**：写明 `cd` 路径与执行命令。
