#include <stdio.h>

int main() {
    int upper_limit,num=1,sum=0;
    printf("Enter upper limit: \n");
    scanf("%d",&upper_limit);
    while (num<=upper_limit) {
        sum+=num;
        num++;
    }
    printf("The sum of first %d natural numbers is: %d\n",upper_limit,sum);
    return 0;
}