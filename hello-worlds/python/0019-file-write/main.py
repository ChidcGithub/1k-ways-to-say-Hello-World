"""Write 'Hello, World!' to a file, then read it back to verify."""


def main():
    with open("hello.txt", "w", encoding="utf-8") as f:
        f.write("Hello, World!")

    with open("hello.txt", "r", encoding="utf-8") as f:
        content = f.read()

    print(content)


if __name__ == "__main__":
    main()
