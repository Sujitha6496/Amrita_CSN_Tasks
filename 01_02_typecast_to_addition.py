a = 10                  #initializing integer variable
b = '10'                #initializing string variable

print(a+int(b))         #printing sum of variables after explicit conversion

c = 'ten'               #initializing string variable
print(int(c))           #converting string variable to integer

#Kind of error: ValueError: invalid literal for int() with base 10: 'ten'
#Reason: 'c' has character literals that cannot be converted to a number