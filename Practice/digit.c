// # write a program that will take a number as input and print the summation of the digits of that number as number as output.

#include <stdio.h>

int main()
{
    int digit, sum = 0;
    scanf("%d", &digit);

    while (digit > 0)
    {
        int n = digit % 10; // 12/10 =2
        sum = sum + n;

        digit = digit / 10; //123/10=12
    }

    printf("Sum : %d", sum);
}