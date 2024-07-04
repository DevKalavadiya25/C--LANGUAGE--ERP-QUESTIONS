#include <stdio.h>


int sum(int supra,int Mercedes , int Ferrari ){


   int total(); 
   {

        int totalPrice = supra + Mercedes + Ferrari;

        return totalPrice; 

    }

     int finalValue  = total();

     int discount = 2300;

     int finalDiscount = finalValue - discount; 
     
     int pwgst = finalDiscount + 18/100;


    //  return pwgst ;
    
    printf("%d",pwgst);

}


int main(){


   int total = sum(68000,58000,75000);

   printf("%d",total);

    return 0;

}