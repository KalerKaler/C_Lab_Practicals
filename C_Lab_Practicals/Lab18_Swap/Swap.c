#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a; a = b; b = temp; // only affects local copies
}
void swapByReference(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}
int main() {
    int x=5, y=10;
    swapByValue(x, y);
    printf("After call by value: x=%d, y=%d\n", x, y); // unchanged
    swapByReference(&x, &y);
    printf("After call by reference: x=%d, y=%d\n", x, y); // swapped
    return 0;
}