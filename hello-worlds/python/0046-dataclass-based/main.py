"""Model a greeting as a dataclass and persist it to a file."""

from dataclasses import dataclass


@dataclass
class Greeting:
    text: str


def main() -> None:
    greeting = Greeting("Hello, World!")

    with open("hello.txt", "w", encoding="utf-8") as f:
        f.write(greeting.text)

    with open("hello.txt", "r", encoding="utf-8") as f:
        content = f.read()

    print(content)


if __name__ == "__main__":
    main()
