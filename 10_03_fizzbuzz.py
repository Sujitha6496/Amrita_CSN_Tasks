# You start this journey with a number `n`.
# You have to display a string representation of all numbers from 1 to n,
# but there are some constraints:
# - If the number is divisible by 3, write `Fizz` instead of the number
# - If the number is divisible by 5, write `Buzz` instead of the number
# - If the number is divisible by both 3 and 5, write `FizzBuzz` instead of the number

# feel free to adjust n for debugging
num = input("Enter the number upto which you like to FizzBuzz: ")
n = int(num)

for i in range(1,n+1):
    if((i%3 == 0) and (i%5 == 0)):
        print("FizzBuzz")
        continue
    elif(i%3 == 0):
        print("Fizz")
        continue
    elif(i%5 == 0):
        print("Buzz")
        continue
    else:
        print(i)
        continue