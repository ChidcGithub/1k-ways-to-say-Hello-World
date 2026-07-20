def char_gen(s):
    for c in s:
        yield c


print(''.join(char_gen("Hello, World!")))
