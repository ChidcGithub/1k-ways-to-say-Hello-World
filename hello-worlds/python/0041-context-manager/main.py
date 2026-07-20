class Hello:
    def __enter__(self):
        print("Hello, World!")
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        return False


with Hello():
    pass
