#include<stdio.h>

	int sum(int x,int y){
	
	
	float c = 0.5*x*y ;
	
	return c;
	
}
int main()
{
 int b,h;
	
	printf("area of triangle is :",b);
	scanf("%d",&b);
	
	printf("area of triangle is :",h);
	scanf("%d",&h);
	
	
//	float calculation = 0.5*b*h;

    float total = sum(b,h);
    
    printf("%f",total);
	
}