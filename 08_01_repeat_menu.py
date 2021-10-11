# Write an explicit infinite loop
# inside the infinite loop, read integer from user as an option

# If the option is 1: print here is your first step
# If the option is 2: print "you have some steps to go"
# If the option is 3: print "you are almost done"
# If the option is 4: quit from the loop

# If the option is other number: print it is an  invalid option

#reading an integer from user as an option
opt = input("Please enter an option: ")

#typecasting
option = int(opt)

while(option == 1):
    print(f"Option {option}: Here is your first step")

while(option == 2):
    print(f"Option {option}: You have some steps to go")
    
while(option == 3):
    print(f"Option {option}: You are almost done")
    
while(option == 4):
    pass

while ((option != 1) or (option != 2) or (option != 3) or (option != 4)):
    print(f"Option {option}: It is an invalid option")