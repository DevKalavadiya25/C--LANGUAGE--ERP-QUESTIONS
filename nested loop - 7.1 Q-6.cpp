#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            if (j % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
