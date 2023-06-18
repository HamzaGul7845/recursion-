#include <stdio.h>

int sumOfDigits(int n)
{
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        int sum = sumOfDigits(number);
        printf("Sum of digits of %d is: %d\n", number, sum);
    }

    return 0;
}

