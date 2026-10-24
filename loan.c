#include<stdio.h>

void main()
{
      int age,monthly_income,credit_score;
      printf("Enter the values ");
      scanf("%d%d%d",&age,&monthly_income,&credit_score);
      
      
      if ( age <21 || age>60)
      {
           printf("Loan rejected: age is not in 21 to 60");
      }     
           
        else if ( monthly_income <25000)
       {
         printf( "Loan rejected: monthly_income <25000");
         }
         
         else if ( credit_score <700)
        {
         printf("Loan rejected : credit_score <700");
         
         }
         
      else
       printf(" Loan approved");     
           
           
        
   
   
   
       
      
      
      
   }     