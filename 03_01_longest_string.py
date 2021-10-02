#Initializing string variables
longest_german_word = "Donaudampfschifffahrtsgesellschaftskapitänskajütentürschnalle"
longest_hungarian_word = "Megszentségteleníthetetlenségeskedéseitekért"
longest_finnish_word = "Lentokonesuihkuturbiinimoottoriapumekaanikkoaliupseerioppilas"
strong_password = "%8Ddb^ca<*'{9pur/Y(8n}^QPm3G?JJY}\(<bCGHv^FfM}.;)khpkSYTfMA@>N"

#printing length of each variable
print(len(longest_german_word))
print(len(longest_hungarian_word))
print(len(longest_finnish_word))
print(len(strong_password))

#or
print(f"The length of {longest_german_word} is {len(longest_german_word)}")
print(f"The length of {longest_hungarian_word} is {len(longest_hungarian_word)}")
print(f"The length of {longest_finnish_word} is {len(longest_finnish_word)}")
print(f"The length of {strong_password} is {len(strong_password)}")

#assigning longest length to a variable
longest_length = len(strong_password)

#printing longest string with its length
print(f"The longest string from above is {strong_password} and its length is {longest_length}")