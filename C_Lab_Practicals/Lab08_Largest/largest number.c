#include <stdio.h>

int main() {
    int num1,num2,num3,largest;
    printf("Enter three numbers separated by spaces\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("Using conditional operator:-\n");
    printf("The biggest number is %d.\n",(num1>num2)?num1:(num2>num3)?num2:num3);
    printf("Using If-Else\n");
    if (num1>num2 && num1>num3) {
        largest = num1;
    }
    else if (num2>num1 && num2>num3) {
        largest = num2;
    }
    else {
        largest = num3;
    }
    printf("The largest number is %d.",largest);
}