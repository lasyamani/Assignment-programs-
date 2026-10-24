#include<stdio.h>

void main()
{
      int user_Id ,password;
      printf("Enter the user Id and password values");
      scanf("%d%d",&user_Id,&password);
      
      if (user_Id != 101)
    {
      printf("User not found");
      }
      
      else if ( password != 4321)
      {
      printf(" incorrect password ");
      }
      else
       {
       printf(" Login succesful");
       }
        
   
   
   
       
      
      
      
   }     