#include<stdio.h>

void main()
{
      int marks;
      char grade;
      printf(" Enter the marks ");
      scanf("%d",&marks);
     
     
     
      if ( marks <0 || marks >100)
      printf ("Invalid marks");
      else if (marks >=90)
      printf("Grade is 'O'");
      else if ( marks >=80)
      printf("Grade is 'A+'");
      else if ( marks >=70)
      printf("Grade is 'A'");
      else if ( marks >=60)
      printf("Grade is 'B'");
      else if (marks >=50)
      printf("Grade is 'C'");
      
      
      else 
      printf (" Student is fail");
   
       
      
      
      
   }     