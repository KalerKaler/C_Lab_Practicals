#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];
    int count = 0;

    printf("Enter main string: ");
    scanf(" %[^\n]", str); // Reads string with spaces
    printf("Enter substring: ");
    scanf(" %[^\n]", sub);

    char *pos = str;
    // strstr returns NULL when no more matches are found
    while ((pos = strstr(pos, sub)) != NULL) {
        count++;
        pos++; // Move forward by 1 character to find the next match
    }

    printf("Total appearances: %d\n", count);
    return 0;
}