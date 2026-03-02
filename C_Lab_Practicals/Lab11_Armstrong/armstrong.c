#include <stdio.h>
#include <math.h>

int main() {
    int number,sum=0,temporary;
    printf("Enter a three-digit number to check\n");
    scanf("%d",&number);
    temporary = number;
    for (int i=0;temporary>0;i++) {
        sum += pow(temporary%10,3);
        temporary /=10;
    }
    printf((sum==number)?"This is an armstrong number.":"It is not an armstrong number");
    return 0;
}