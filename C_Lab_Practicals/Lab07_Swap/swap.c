#include <stdio.h>

int main() {

    int num1,num2,buffer;
    printf("Enter number 1\n");
    scanf("%d",&num1);
    printf("Enter number 2\n");
    scanf("%d",&num2);
    printf("Using swap variable\n");
    buffer = num1;
    num1 = num2;
    num2 = buffer;
    printf("After swapping the variables\nnum1 = %d and num2 = %d\n",num1,num2);
    printf("Without swap variable\n");
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swapping back\nnum1 = %d and num2 = %d.", num1,num2);
}