# Tiny stack machine (Forth-like): push strings, then concatenate by popping.
# The only operation is a concatenation op: pop top two items, push their
# concatenation. Repeat until a single item remains on the stack.

stack = []

# Push literals onto the stack (top is the rightmost element).
stack.append("Hello")
stack.append(", ")
stack.append("World!")

# Concatenation op: pop two, push their concatenation, until one item remains.
while len(stack) > 1:
    b = stack.pop()  # top of stack
    a = stack.pop()  # second from top
    stack.append(a + b)

# The single remaining item is the concatenated result.
print(stack[0])
