#Reading an integer number less than 7 from user
num = input("Please enter a number between 0 and 7: ")

#typecasting since input is in string format
n = int(num)

#If the input number is greater than  or equal to 7, then print error message
if((n < 0) or (n > 7)):
    print("Error: Please enter a number between 0 and 7.")

#If the input is 0 print "Sunday"
#If the input is 1 print "Monday"
#If the input is 2 print "Tuesday"
#If the input is 3 print "Wednesday"
#If the input is 4 print "Thrusday"
#If the input is 5 print "Friday"
#If the input is 6 print "Saturday"
#Use if-else statements

if(n == 0):
    print(f"{n}: Sunday")
elif(n == 1):
    print(f"{n}: Monday")
elif(n == 2):
    print(f"{n}: Tuesday")
elif(n == 3):
    print(f"{n}: Wednesday")
elif(n == 4):
    print(f"{n}: Thursday")
elif(n == 5):
    print(f"{n}: Friday")
elif(n == 6):
    print(f"{n}: Saturday")
    
