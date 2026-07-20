"""Recursively rebuild 'Hello, World!' one character at a time, then persist to a file."""


def build(s: str, i: int = 0) -> str:
    if i >= len(s):
        return ""
    return s[i] + build(s, i + 1)


def main() -> None:
    result = build("Hello, World!")

    with open("hello.txt", "w", encoding="utf-8") as f:
        f.write(result)

    with open("hello.txt", "r", encoding="utf-8") as f:
        content = f.read()

    print(content)


if __name__ == "__main__":
    main()
