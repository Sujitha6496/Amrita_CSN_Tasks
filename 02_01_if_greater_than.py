#accepting two numbers as input from user
first_num = input("Please enter 1st number: ")
second_num = input("Please enter 2nd number: ")

#displaying both input numbers
print("You have entered the following numbers")
print(f"First number: {first_num}\nSecond number: {second_num}")

#type of the input numbers
print(f"Type of 1st number: {type(first_num)}")
print(f"Type of 2nd number: {type(second_num)}")

#comparing the two numbers
#By default, input() creates a string type
#typecasting to int because input numbers are of class string
if (int(first_num) > int(second_num)):                      
    print(f"{first_num} is greater than {second_num}")
else:
    print(f"{first_num} is smaller than {second_num}")
    
#without typecasting, it will give wrong answers
if (first_num > second_num):                      
    print(f"{first_num} is greater than {second_num}")
else:
    print(f"{first_num} is smaller than {second_num}")