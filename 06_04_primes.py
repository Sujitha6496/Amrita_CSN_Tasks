#Write a python program to print all prime numbers between 0 to 100 , and print how many prime numbers are there

count = 0
print("The prime numbers between 1 and 100 are:")
for n in range(1,101):  
   if n > 1:  
       for i in range(2,n):  
           if ((n % i) == 0):  
               break  
       else:  
           print(n, end = "   ")
           count+=1
print(f"\nThere are {count} prime numbers between 1 and 100")