#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern
    int count = 1; // Starting number

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}

