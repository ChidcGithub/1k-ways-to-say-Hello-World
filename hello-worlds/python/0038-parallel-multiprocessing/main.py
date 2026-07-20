from multiprocessing import Pool


def greet(ch):
    return ch


if __name__ == "__main__":
    with Pool() as pool:
        result = pool.map(greet, list("Hello, World!"))
    print("".join(result))
