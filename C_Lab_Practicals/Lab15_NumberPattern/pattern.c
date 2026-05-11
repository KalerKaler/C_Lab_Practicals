#include <stdio.h>

int main() {
    int row;
    printf("Enter the number of rows to generate\n");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}