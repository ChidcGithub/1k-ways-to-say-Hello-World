try:
    from js import document

    document.body.textContent = "Hello, World!"
except ImportError:
    print("Hello, World!")
