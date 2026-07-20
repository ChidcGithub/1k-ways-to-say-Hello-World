import sys
import enum


class Message(enum.Enum):
    HELLO = "Hello, World!"


sys.stderr.write(Message.HELLO.value + "\n")
