#include <stdio.h>

int calculateSum(int n)
{
    if (n == 0) {
        return 0;
    } else {
        return n + calculateSum(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = calculateSum(n);
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}

