a = 10
print(type(a))              #printing the type of the variable

b = float(a)                #converting integer variable to float
print(type(b))              #printing the type of the converted variable

c = str(b)                  #converting float variable to string
print(type(c))              #printing the type of the converted variable

d = int(c)                  #converting string variable back to integer variable
print(type(d))              #printing the type of the converted variable 

#Will give ValueError because 'd' has character literal '.' which cant be converted to an integer value