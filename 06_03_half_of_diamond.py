#Write a Python program to construct the following pattern, using a nested for loop.

#* 
#* * 
#* * * 
#* * * * 
#* * * * * 
#* * * * 
#* * * 
#* * 
#*


for i in range(0,5):
    for j in range(0,i+1):
        print('*', end = " ")
    print()

for i in range(1,5):
    for j in range(i,5):
        print('*',end = " ")
    print()