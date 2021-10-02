#initializing variables
a = True
b = False
c = True

#printing values of a, b, c
print(f"a = {a}")
print(f"b = {b}")
print(f"c = {c}")

#printing value of a and b or c
print(f"The value of (a AND b OR c) is: {a and b or c}")

#Order of operations matter because
#if a and b is considered first, the result will be False
#then this result or c, we will get True
#when computed together also, the end result is True

a = True
b = False
c = False

#printing values of a, b, c
print(f"a = {a}")
print(f"b = {b}")
print(f"c = {c}")
#printing value of a and b or c
print(f"The value of (a AND b OR c) is: {a and b or c}")

#if a and b is considered first, the result will be False
#then this result or c, we will get False
#when computed together also, the end result is False