//	Write a program to convert decimal to binary using recursion
#include <stdio.h>

void decimalToBinary(int n)
{
    if (n > 0) {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Invalid input. Please enter a non-negative decimal number.\n");
    } else {
        printf("Binary representation: ");
        if (decimal == 0) {
            printf("0");
        } else {
            decimalToBinary(decimal);
        }
        printf("\n");
    }

    return 0;
}

