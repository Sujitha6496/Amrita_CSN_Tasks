import random
#taking input from user

while True:
    pc = input("Enter 1 for Rock, 2 for Paper, 3 for Scissors: ")
    player_choice = int(pc)

    #taking input from user until user enters valid choice
    while player_choice < 1 or player_choice > 3:
        print("Invalid Option!")
        pc = input("Enter 1 for Rock, 2 for Paper, 3 for Scissors: ")
        player_choice = int(pc)

    #assigning respective options to numbers
    if player_choice == 1:
        pchoice = "Rock"
    elif player_choice == 2:
        pchoice = "Paper"
    else:
        pchoice = "Scissors"

    print(f"Player's Choice is {player_choice} - {pchoice}")

    computer_choice = random.randint(1,3)

    if computer_choice == 1:
        cchoice = "Rock"
    elif computer_choice == 2:
        cchoice = "Paper"
    else:
        cchoice = "Scissors"

    print(f"Computer's Choice is {computer_choice} - {cchoice}")

    #comparing both the choices

    if pchoice == cchoice:
        print(f"Both players chose {pchoice}. Its a tie!")
    elif pchoice == "Rock":
        if cchoice == "Paper":
            print("Computer Wins!")
        else:
            print("Player Wins!")
    elif pchoice == "Paper":
        if cchoice == "Rock":
            print("Player Wins!")
        else:
            print("Computer Wins!")
    elif pchoice == "Scissors":
        if cchoice == "Rock":
            print("Player Wins!")
        else:
            print("Computer Wins!")

    option = input("Do you want to play again? Enter Y for Yes or N for No: ")

    if option == 'N':
        exit