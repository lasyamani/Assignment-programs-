#include<stdio.h>

void main()
{
      
        float order_amount,discount,delivery_charge,payable_amount  ;
        int membership ;
        
        printf("Enter order_amount and membership");
        scanf("%f%d",&order_amount,&membership);
        
         if ( order_amount >=500)
          { 
              if (membership ==1)
              
              discount = order_amount *0.10;
               
               else
                discount = 0;
               
          } 
        else
        {
           delivery_charge = 50;
           discount = 0;
           
         }  
           
           payable_amount =order_amount - discount+delivery_charge;
           
   
     
             printf("\n Enter the payable_amount = %2f",payable_amount);
   
   
   
       
      
      
      
   }     