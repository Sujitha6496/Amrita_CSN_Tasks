#asking user for their name
name = input('Please enter your name: ')

#Saying hello to them with their name
print(f"Hello {name}!")

#Name beginning with vowel
vowels = ['a','e','i','o','u','A','E','I','O','U']
for letters in vowels:
    if (letters == name[0]):
        print('Aha! Oho! Uhu! Ihi! Your name begins with a vowel!')
        break

#name beginning with a consonant
if (letters != name[0]):
    print('Aha! Oho! Uhu! Ihi! Your name begins with a consonant!')
    
# Asking them to pick a number between 1 and 10
num = input(f"{name}, please pick a number between 1 and 10: ")

# If they guessed the right number, tell them they won
if(int(num) in range(1,10)):
    print(f"{name}. Congratulations!!! You won!!!")

# Else, tell them they lost.
else:
    print(f"{name}. Better luck next time!")