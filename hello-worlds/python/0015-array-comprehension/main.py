# APL-style: operate on the whole character array at once via list comprehension.
# The string is treated as an array of characters; the comprehension applies
# identity to every element in a single whole-array expression, then the array
# is reassembled into a string. No element-by-element loop is written by hand.

text = "Hello, World!"
chars = list(text)  # materialize the character array

# Whole-array operation: identity applied to each element via comprehension.
result = "".join([c for c in chars])

print(result)
