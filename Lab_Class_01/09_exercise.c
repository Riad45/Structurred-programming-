#include <stdio.h>

int main()
{
    int number, sum, x1, x2, x3, x4, d1, d2, d3, d4;

    printf("Enter the 4 digit number:\n");
    scanf("%d", &number);

    x1 = number / 10;
    d4 = number % 10;
    x2 = x1 / 10;
    d3 = x1 % 10;
    x3 = x2 / 10;
    d2 = x2 % 10;
    x4 = x3 / 10;
    d1 = x3 % 10;

    sum = d1 + d4;
    printf("The sum of the first and last digit of this number is:\n%d", sum);
    return 0;
}