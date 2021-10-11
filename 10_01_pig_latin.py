story = """
At a great meeting of the Animals, who had gathered to elect a new ruler, the Monkey was asked to dance. This he did so well, with a thousand funny capers and grimaces, that the Animals were carried entirely off their feet with enthusiasm, and then and there, elected him their king.
The Fox did not vote for the Monkey and was much disgusted with the Animals for electing so unworthy a ruler.
One day he found a trap with a bit of meat in it. Hurrying to King Monkey, he told him he had found a rich treasure, which he had not touched because it belonged by right to his majesty the Monkey.
The greedy Monkey followed the Fox to the trap. As soon as he saw the meat he grasped eagerly for it, only to find himself held fast in the trap. The Fox stood off and laughed.
"You pretend to be our king," he said, "and cannot even take care of yourself!"
Shortly after that, another election among the Animals was held.
"""

words = story.split()
#print(words)

for word in words:
    letter1 = word[0]
    #print(letter1)
    
    length = len(word)
    #print(length)
    
    removed_letter1 = word[1:length]
    #print(removed_letter1)
    
    pig_latin = removed_letter1 + letter1 + "ay"
    print(pig_latin)

    #not combined into a single sentence