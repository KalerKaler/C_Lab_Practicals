#include <stdio.h>

int main(void) {
    float radius, area=0, circumference=0;
    float pi=3.14;
    printf("Enter radius of the circle\n");
    scanf("%f", &radius);
    circumference=2*pi*radius;
    area=pi*radius*radius;
    printf("Area of the circle is %.2f and the Circumference is %.2f.", area, circumference);
    return 0;
}