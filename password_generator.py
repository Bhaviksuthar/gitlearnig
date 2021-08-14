import string 
import random

while(True):
    l=string.ascii_lowercase
    u=string.ascii_uppercase
    d=string.digits
    p=string.punctuation

    pwd=[]
    pwd.extend(list(l))
    pwd.extend(list(u))
    pwd.extend(list(d))
    pwd.extend(list(p))
    random.shuffle(pwd)
    pwdlen=int(input("\nEnter the length for password : "))
   
    print(f" \nYour  password : " + "".join(pwd[0:pwdlen]))
   
    
    newpwd=input("\nIf you want to get new password or not  enter Y or N :")
    
    if(newpwd=='n' or newpwd=='N'):
        break
    
    elif (newpwd=='y' or newpwd=='Y'):
        print(f" \nYour  password : " + "".join(pwd[0:pwdlen]))
        
        
    else:
        print("\n Please enter valid code ")
        break

with open("pwd.txt", "w") as f:
       f.write("Your password = " + str(("".join(pwd[0:pwdlen]))))
       



