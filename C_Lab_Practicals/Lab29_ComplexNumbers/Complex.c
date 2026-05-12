#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1 = {3.5, 2.5}, c2 = {1.5, 4.0}, sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}