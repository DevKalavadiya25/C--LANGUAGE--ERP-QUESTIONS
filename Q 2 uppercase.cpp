#include<stdio.h>

int main ()
{
char str[] = "hello world";

for(int i=0; str[i] != NULL; i++ ){
	
	if(str[i] >='a' && str[i]<='z'){
		
		printf("%c",str[i]-32);
		
	}else
	
	printf(" ");
	
}
}