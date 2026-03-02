#include <stdio.h>

int main() {
    int length,number,rev_number;
    printf("Enter a number\n");
    scanf("%d",&number);
    for (length=0;number!=0;length++) {
        rev_number*=10;
        rev_number+=number%10;
        number/=10;
    }
    printf("The length of the entered number is %d\n",length);
    printf("The reverse of the entered number is %d\n",rev_number);
    return 0;
}