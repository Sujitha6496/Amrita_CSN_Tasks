# use a for loop with enumerate to go over the long word and
# sum all the indices for every single vowel

# example:

# input: "hi I me
# i=1, I=3, e = 6,
# the sum is: 10
# the sum should be 1147 (you can check your code with this)

word = "the quick brown fox jumped over the lazy dog and then ran around and got very happy happy happy yes!"

print(word)
print('\n')

vowels = ['a','e','i','o','u']

#printing the indices
for i, letter in enumerate(word):
    print(i,letter,end = " - ")
    
print('\n')

sum = 0
for j, letter in enumerate(word):
    if(letter in vowels):
        sum = sum + j
print(f"The sum of all indices for every vowel in the sentence is {sum}")