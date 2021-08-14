#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(int comp, int you)
{
        //it returns 0 when comp and you choose same value
     if(comp==you)
     {
          return 0;
     }
            
     else if(comp=='r')
     {
          if(you=='p')
          {
               return 1;
          }
               
          else if(you=='s')
          {
               return -1;
          }
            
     }
            
     else if(comp=='p')
     {
          if(you=='r')
          {
               return -1;
          }
          else if(you=='s')
          {
               return 1;
          }
     }
              
     else if(comp=='s')
     {
          if(you=='p')
          {
               return -1;
          }
          else if (you=='r')
          {
               return 1;
          }
                       
     }
                
             
    }
int main()
{
     char comp , you;
     
     printf("Computer's turn : \n Choose: \n (r) for rock , (p) for paper , (s) scissor : ");
     
     srand(time(0));
     int number=rand()%3+1;
     
     if(number==1)
     {
          comp='r';
     }
          
     if(number==2)
     {
          comp='p';
     }
           
     if(number==3)
     {
          comp='s';
     }
            
     printf("\n\nYour turn : \n Choose: \n (r) rock , (p) for paper , (s) for scissor : ");
     scanf("%c",&you);
        
     printf("\nComputer chooses : %c",comp);
     printf("\n\nYou chooses : %c",you);
        
     int result=rockpaperscissor(comp,you);
       
     if(result==0)
     {
          printf("\n\nYour Game is Tie !");
     }

     else if (result==1)
     {
          printf("\n\nCongrats ! You Win the game.");
     }
         
     else
     {
          printf("\n\nSorry! you lose the game.");
     }
               
               
   return 0;
    }