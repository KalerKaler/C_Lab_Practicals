#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char s1[50] = "Hello", s2[50] = "World";

    printf("1.Length 2.Concat 3.Copy 4.Compare 5.Reverse\nChoice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Length: %zu", strlen(s1)); break;
        case 2: strcat(s1, s2); printf("Joined: %s", s1); break;
        case 3: strcpy(s1, s2); printf("New s1: %s", s1); break;
        case 4: printf("Match: %d", strcmp(s1, s2)); break;
        case 5: {
            int n = strlen(s1);
            for(int i = 0; i < n/2; i++) {
                char temp = s1[i];
                s1[i] = s1[n - i - 1];
                s1[n - i - 1] = temp;
            }
            printf("Reversed: %s", s1);
            break;
        }
        default: printf("Invalid");
    }
    return 0;
}