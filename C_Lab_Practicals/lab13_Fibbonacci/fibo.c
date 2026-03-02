#include <stdio.h>

int main() {
    int num1=0,num2=1,limit;
    printf("Enter the limit till which to generate the series\n");
    scanf("%d",&limit);
    printf("The fibonacci series till %d is-\n",limit);
    while(num1<=limit) {
        num1=num1+num2;
        num2=num1-num2;
        printf("%d\n",num2);
    }
}