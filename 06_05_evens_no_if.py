# Write a program to print the even numbers from 0 to 100 using for loop and without using if-else

print("The even numbers between 0 and 100 are:")
count = 0

for i in range(0,101):
    if(i%2 == 0):
        print(i, end = "   ")
        count+=1

print(f"There are total {count} even numbers between 0 and 100")