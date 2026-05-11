#include <stdio.h>
#define PI 3.1416

float area(float r) { return PI * r * r; }
float circumference(float r) { return 2 * PI * r; }

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area = %.2f\n", area(radius));
    printf("Circumference = %.2f\n", circumference(radius));
    return 0;
}