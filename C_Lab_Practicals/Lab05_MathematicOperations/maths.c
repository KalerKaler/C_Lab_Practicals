#include <stdio.h>

int main(void) {
    int num1,num2,choice;
    float result;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("Which operation do you want to perform?\nEnter 1 for addition, 2 for substraction, 3 for multiplication, 4 for division\n");
    scanf("%d",&choice);
    switch(choice) {
        case 1:
            result=num1+num2;
            break;
        case 2:
            result=num1-num2;
            break;
        case 3:
            result=num1*num2;
            break;
        case 4:
            result=(float)num1/num2;
            break;
        default:
            printf("Invalid choice");
    }
    printf("The result of the operation is %.2f",result);
}