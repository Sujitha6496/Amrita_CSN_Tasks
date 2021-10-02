# Use string indexing and string concatenation (or f-strings)
# to write the sentence "we see trees" only by picking
# the necessary letters from the given string.

word = "tweezers "

#sentence "we see trees"

a = word[1:3]
b = word[-2:-8:-2]
c = word[0::6]
d = word[3:8:2]

print(a + " " + b + " " + c+d)