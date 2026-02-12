#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number %d is even", number);
    }
    else {
        printf("The number %d is odd", number);
    }
    return 1;
}