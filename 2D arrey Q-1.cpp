#include <stdio.h>

int main() {
    int rowSize, colSize;
    

    printf("Enter the array's row size: ");
    
    scanf("%d", &rowSize);
    
    printf("Enter the array's column size: ");
    scanf("%d", &colSize);
    
    int array[rowSize][colSize];
    
    int sum = 0;
    
    int totalElements = rowSize * colSize;
    
    printf("Enter array's elements:\n");
    
    for(int i = 0; i < rowSize; i++) {
    	
        for(int j = 0; j < colSize; j++) {
        	
            printf("a[%d][%d] = ", i, j);
            
            scanf("%d", &array[i][j]);
            
            sum += array[i][j];
        }
    }
    
    double average = (double)sum / totalElements;
    
    printf("Average of the array: %.2f\n", average);
    
    return 0;
}
