#include <stdio.h>
int main() {
    int number;
    printf("Enter your birth month\n");
    scanf(" %d", &number);
    printf("Thanks. I will remember your birthday is in month %d.", number);

    return 0;
}