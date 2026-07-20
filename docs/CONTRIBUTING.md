# 贡献指南

感谢你对 `1k-ways-to-say-Hello-World` 的兴趣！无论你是想新增一个冷门语言的 Hello World，还是贡献一段炫技代码，都非常欢迎。

## 提交前必读

1. 阅读 [CATEGORIZATION.md](./CATEGORIZATION.md)，确认你的实现**确实不同于**已有条目。
2. 浏览 [`hello-worlds/`](../hello-worlds/) 目录，确认编号未冲突。
3. 确保你的代码**本地可运行**并已实际测试过。

## 添加一个新 Hello World 的步骤

### 1. 分配编号

打开 `hello-worlds/` 目录，找到当前最大编号 `N`，你使用 `N+1`。编号用 4 位零填充，例如 `0042`。

### 2. 创建条目目录

命名格式：`<编号>-<语言>-<短描述>`

```
hello-worlds/0042-rust-one-liner/
├── README.md      # 必需：元数据 + 说明
└── main.rs        # 必需：源代码（文件名按语言惯例）
```

如果条目需要多个源文件（如 HTML+JS+CSS），全部放在该目录下。

### 3. 填写 README.md

复制 [`ENTRY_TEMPLATE.md`](./ENTRY_TEMPLATE.md) 的内容并按实际情况填写。**YAML front matter 必填**，它是检索和分类的依据。

### 4. 本地验证

确保代码能运行并输出 `Hello, World!`（或等价内容）。在条目 `README.md` 的"运行方式"一节写出确切命令。

### 5. 提交 PR

- 分支命名：`add-0042-rust-one-liner`
- Commit message：`Add #0042: rust - one-liner`
- PR 标题：`Add #0042: <language> - <short description>`
- PR 描述中说明：使用了哪些分类维度、为何与已有条目不同。

## 代码规范

- **保持最小**：只做 "Hello, World!"，不夹带其他功能。
- **可读优先**：除非 `tags` 包含 `obfuscated` 或 `code-golf`，否则代码应清晰可读。
- **无外部依赖优先**：能用标准库完成就不要引入第三方包。
- **注释语言**：代码注释与项目主语言一致（中文/英文均可，但同一文件内保持一致）。

## 行为准则

- 尊重所有贡献者，不因水平高低、语言偏好贬低他人。
- 不接受包含恶意代码、攻击性内容或侵权的条目。
- 重复条目由维护者按 [CATEGORIZATION.md](./CATEGORIZATION.md) 的判定规则裁决。

## 维护者

- 合并 PR 前会检查：编号连续性、分类元数据完整性、代码可运行性。
- 如发现重复，会在 PR 中说明并建议合并或调整分类维度。

再次感谢你的贡献！让我们一起凑齐 1000 种 Hello World。
