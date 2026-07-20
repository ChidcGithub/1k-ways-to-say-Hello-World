---
id: 0022
language: python
paradigm: procedural
output: gui
platform: desktop-gui
era: modern
tags: []
notes: "Tkinter messagebox popup displaying 'Hello, World!'."
author: ChidcGithub
date: 2026-07-20
---

# #0022 · Python GUI Tkinter

## Description

A graphical Hello World rendered as a native OS dialog. The program creates a hidden `Tk` root window (`root.withdraw()` so no empty window is shown), then calls `messagebox.showinfo("Hello", "Hello, World!")` to pop up a platform-native information dialog with the greeting as its body. After the user dismisses the dialog, `root.destroy()` tears down the Tcl interpreter. The greeting's destination is a GUI widget, not a terminal — a fundamentally different sensory channel from the `print()` baseline. Uses only Tkinter, which ships with CPython on Windows and macOS (and most Linux distros via the `python3-tk` package).

> **Note:** This entry opens a GUI dialog. On a headless system (no display server) it will fail with a `_tkinter.TclError: no display name` or similar. On Windows/macOS and desktop Linux it runs normally — click **OK** to dismiss the popup.

## Source Code

`main.py`:

```python
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
```

## Run

```bash
cd hello-worlds/python/0022-gui-tkinter
python main.py
```

A native dialog titled **Hello** will appear with the body **Hello, World!**. Click **OK** to dismiss it. No stdout is produced.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the standard-library `tkinter` package |
| paradigm | `procedural` | A short sequence of calls against the Tk API; no custom classes or data flow |
| output | `gui` | The greeting appears in a native graphical dialog box |
| platform | `desktop-gui` | Requires a desktop environment with a display server; not a CLI program |
| era | `modern` | `tkinter` (renamed from `Tkinter`) became the standard spelling in Python 3.0 (2008) |
| tags | `[]` | No special technique worth indexing — straightforward messagebox call |

## Reference

- [Python 3 `tkinter` documentation](https://docs.python.org/3/library/tkinter.html)
- [Python 3 `tkinter.messagebox` documentation](https://docs.python.org/3/library/tkinter.messagebox.html)
