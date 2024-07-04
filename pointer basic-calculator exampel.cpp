#include <stdio.h>

void myFunction(int *a,int *b,int *c ){

    int mul = *a * 2;
    int plus = *b + 2;
    int minus = *c - 2;

    *a = mul;
    *b = plus;
    *c = minus;


}


int main(){

    int num1,num2,num3;

    printf("Enter Two Numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    myFunction(&num1,&num2,&num3);


    printf("%d %d %d",num1,num2,num3);



    return 0;

}