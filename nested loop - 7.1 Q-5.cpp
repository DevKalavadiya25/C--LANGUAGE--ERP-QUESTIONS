#include<stdio.h>

int main() {
	
	int row;
	
	printf("Enter the number of rows :- ");
	scanf("%d", &row);
	
	for(int i=0; i<row; i++) {
		printf("\n");
		for(int j=row; j>=1; j--) {
			if(j>i) {
				printf("%d ", i+1);
			}
		}		
	}
}
	