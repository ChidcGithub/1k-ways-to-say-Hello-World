"""Tkinter messagebox popup displaying 'Hello, World!'."""

import tkinter as tk
from tkinter import messagebox


def main():
    root = tk.Tk()
    root.withdraw()
    messagebox.showinfo("Hello", "Hello, World!")
    root.destroy()


if __name__ == "__main__":
    main()
