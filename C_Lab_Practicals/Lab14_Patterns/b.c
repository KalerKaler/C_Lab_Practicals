#include <stdio.h>

int main() {
    int row;
    printf("Enter the number of rows to generate\n");
    scanf("%d", &row);
    for (int i = 0; i < row; i++) {
        for (int k = 0; k < row - i; k++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}