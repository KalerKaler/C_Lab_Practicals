#include <stdio.h>

int main() {
    char alphabet;
    int number;
    printf("Enter an alphabet and a number: \n");
    scanf(" %c %d", &alphabet, &number);
    switch (alphabet) {
        case 'a': case 'A': case 'e': case 'E':
        case 'i': case 'I': case 'o': case 'O':
        case 'u': case 'U':
            printf("'%c' is a Vowel.\n", alphabet);
            break;
        default:
            printf("'%c' is a Consonant.\n", alphabet);
    }
    switch (number > 0) {
        case 1:
            printf("%d is Positive.\n", number);
            break;
        case 0:
            switch (number < 0) {
            case 1:
                    printf("%d is Negative.\n", number);
                    break;
            default:
                    printf("%d is Zero.\n", number);
            }
            break;
    }
    return 0;
}