import random

score = 0

for x in range(3):
    tie = True

    while tie:
        choice = ''
        while choice != 'rock' and choice != 'paper' and choice != 'scissors':
            choice = raw_input('Enter your move: ')
            choice = choice.strip()
            choice = choice.lower()

        computer = random.randint(1, 3)
        if computer == 1:
            computer = 'rock'
        if computer == 2:
            computer = 'paper'
        if computer == 3:
            computer = 'scissors'
        print 'Computer: ' + computer

        if choice == 'rock':
            if computer == 'rock':
                print 'Tie!'
            if computer == 'paper':
                print 'Paper covers rock, you lose.'
                tie = False
            if computer == 'scissors':
                print 'Rock beats scissors, you win!'
                score = score + 1
                tie = False

        if choice == 'paper':
            if computer == 'rock':
                print 'Paper covers rock, you win!'
                score = score + 1
                tie = False
            if computer == 'paper':
                print 'Tie!'
            if computer == 'scissors':
                print 'Scissors cuts paper, you lose.'
                tie = False

        if choice == 'scissors':
            if computer == 'rock':
                print 'Rock beats scissors, you lose.'
                tie = False
            if computer == 'paper':
                print 'Scissors cuts paper, you win!'
                score = score + 1
                tie = False
            if computer == 'scissors':
                print 'Tie!'
        print

print 'You won ' + str(score) + '/3 times'
