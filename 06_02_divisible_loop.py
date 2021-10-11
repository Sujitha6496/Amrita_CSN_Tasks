# Write a Python program to find those numbers which are divisible by 7 and multiple of 5, between 1500 and 2700

print("The numbers that are divisible by 7 and multiple of 5 between 1500 and 2700 are:")

i = 0
for n in range(1500,2701):
    if((n%7 == 0) and (n%5 == 0)):
        print(n)
        i+=1
print(f"There are total {i} numbers that are divisible by 7 and multiple of 5 between 1500 and 2700")