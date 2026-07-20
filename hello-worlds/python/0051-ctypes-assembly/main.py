import ctypes

try:
    libc = ctypes.CDLL("msvcrt.dll")
except OSError:
    libc = ctypes.CDLL("libc.so.6")

libc.puts(b"Hello, World!")
