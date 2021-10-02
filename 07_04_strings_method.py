# Use a Python string method to prove which of the following files
# are .pdf files, and which aren't.
# Call the method on each file string and print() Python's response.

file_1 = "operators.pdf"
file_2 = "snowfall.jpg"
file_3 = "uncle-joes-wedding.doc"
file_4 = "invitation.pdf"

#file_1
if(file_1.endswith('.pdf')):
    print(f"{file_1} is a pdf file")
else:
    print(f"{file_1} is not a pdf file")

#file_2    
if(file_2.endswith('.pdf')):
    print(f"{file_2} is a pdf file")
else:
    print(f"{file_2} is not a pdf file")

#file_3
if(file_3.endswith('.pdf')):
    print(f"{file_3} is a pdf file")
else:
    print(f"{file_3} is not a pdf file")

#file_4
if(file_4.endswith('.pdf')):
    print(f"{file_4} is a pdf file")
else:
    print(f"{file_4} is not a pdf file")