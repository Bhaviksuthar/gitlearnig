# Python program to add a number continuously untill the q key  is not pressed 

sum=0
while(True):
    num=input("Enter the  item price: ")
    
    if(num!='q'):
          sum=sum+int(num)
          print(f"\nYour Total so far {sum}\n")
          
    else:
        print(f"\nYour Total bill is {sum}\n Thanks for shopping ! Have a nice day")
        break;
    

