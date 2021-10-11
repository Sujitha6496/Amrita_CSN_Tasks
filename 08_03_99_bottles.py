# write a script that will "sing" a song that goes like this
#  "there are 100 jars of payasam on the counter ...... now i ate one!"
# "there are 99 jars of payasam on the counter ... now I ate one!"
#
#
# "there are 0 jars of payasam on the counter - none left to eat!"
# "now I will go vomit...."

# you must use a while loop to do it

i = 100
while True:
    print(f"there are {i} jars of payasam on the counter ...... now i ate one!")
    i-=1
    if i == 0:
        print("there are 0 jars of payasam on the counter - none left to eat!")
    if i < 1:
        print("now I will go vomit....")
        break