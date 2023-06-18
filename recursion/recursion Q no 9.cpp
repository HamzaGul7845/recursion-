//Write a program in C to check a number is a prime number or not using recursion
#include <stdio.h>

int isPrime(int n, int i)
{
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    }

    if (n % i == 0) {
        return 0;
    }

    if (i * i > n) {
        return 1;
    }

    return isPrime(n, i + 1);
}

int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 2) {
        printf("%d is not a prime number.\n", number);
    } else {
        int prime = isPrime(number, 2);
        if (prime) {
            printf("%d is a prime number.\n", number);
        } else {
            printf("%d is not a prime number.\n", number);
        }
    }

    return 0;
}

