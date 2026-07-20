try:
    from machine import UART

    uart = UART(0, 115200)
    uart.write("Hello, World!\n")
except ImportError:
    print("Hello, World!")
