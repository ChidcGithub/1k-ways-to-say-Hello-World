def say_hello(func):
    def wrapper(*args, **kwargs):
        print("Hello, World!")
        return func(*args, **kwargs)

    return wrapper


@say_hello
def greet():
    pass


greet()
