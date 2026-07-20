import re

if __name__ == "__main__":
    pattern = r"(Hello), (World!)"
    match = re.match(pattern, "Hello, World!")
    if match:
        print(", ".join(match.groups()))
