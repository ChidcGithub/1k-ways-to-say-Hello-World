import base64

encoded = b"SGVsbG8sIFdvcmxkIQ=="
decoded = base64.b64decode(encoded)

with open("hello.txt", "wb") as f:
    f.write(decoded)

with open("hello.txt", "rb") as f:
    content = f.read()

print(content.decode("utf-8"))
