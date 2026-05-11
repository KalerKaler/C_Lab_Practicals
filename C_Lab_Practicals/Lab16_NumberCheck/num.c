#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int intPow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp) {
        int rem = temp % 10;
        sum += intPow(rem, digits);
        temp /= 10;
    }
    return sum == n;
}

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Prime: %s\n", isPrime(num) ? "Yes" : "No");
    printf("Armstrong: %s\n", isArmstrong(num) ? "Yes" : "No");
    printf("Perfect: %s\n", isPerfect(num) ? "Yes" : "No");
    return 0;
}