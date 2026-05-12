#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1 = {5, 8}, d2 = {3, 10}, sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches %= 12;
    }
    printf("Sum = %d feet %d inches\n", sum.feet, sum.inches);
    return 0;
}