import random


randnumber=random.randint(1,100)


guessnumber=None
guesses=0

while(guessnumber!=randnumber):
    guessnumber=int(input("Guess the number: "))
    guesses+=1
    
    if(guessnumber==randnumber):
        print("\nWow ! You guessed right number 🎉🥳 🎊")
        
    else :
        if(guessnumber>randnumber):
            print("\nYou guess larger number 🤬😡 ! Guess smaller number")
        else:
            print("\nyou guess smaller number 😡🤬! Guess larger number")
            
            
print(f"\nYou guessed number {guesses} times")

with open("hiscore.txt") as f:
    hiscore = int(f.read())

if(guesses < hiscore):
    print("\nWow ! You broken the hiscore 💃🕺")
    
    with open("hiscore.txt","w")as f:
        f.write("Your hiscore is " + str(guesses))
