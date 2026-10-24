#include<stdio.h>

void main()
{
      float weight,height,BMI;
      
      printf("Enter the weight(kg) and height(m) values");
      scanf("%f%f",&weight,&height);
      
      BMI = (weight )/ (height*height);
      
      printf("\n %.2f is BMI value",BMI);
      
      if (BMI >=30)
      printf("\n Person is obese");
      else if (BMI >=25)
      printf("\n Person is overweight");
      else if (BMI >=18.5)
      printf("\n Person is normal");
      
      else 
      printf("\n Person is Underweight");
      
   }     