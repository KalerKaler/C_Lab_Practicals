#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int *arr[];
    arr[0] = 4;
    arr[2] = 88;
    for (int i = 0; i < 3; i++) {
        printf("%d", arr[i]);
    }

}