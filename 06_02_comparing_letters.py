#initializing variables
ay = "a"
bee = "b"

# which one is bigger?

print(f"Order of ay variable is {ord(ay)}")
print(f"Order of bee variable is {ord(bee)}")

if (ay > bee):
    print(f"ay is bigger")
else:
    print(f"bee is bigger")

# Why?? Because ASCII value of 'b' is greater than ASCII value of 'a'
    #ord() funtion gives the ASCII value of a character literal

# How does python store string characters under the hood?
    #string characters are stored as unicode characters
    #unicode characters are stored with either 1,2 or 4 bytes dependingon the size of the encoding

# look up what ord() does online and report back!
    #converts a character to unicode value
    #accepts only a single character
    #if you want to check whether a string contains special characters