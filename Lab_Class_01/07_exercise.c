#include <stdio.h>
int main()
{
    int num, sum, x1, x2, x3, x4, x5, d1, d2, d3, d4, d5;

    printf("Enter the 5 digit number:\n ");
    scanf("%d", &num);

    x1 = num / 10;
    d5 = num % 10;
    x2 = x1 / 10;
    d4 = x1 % 10;
    x3 = x2 / 10;
    d3 = x2 % 10;
    x4 = x3 / 10;
    d2 = x3 % 10;
    x5 = x4 / 10;
    d1 = x4 % 10;
    sum = d1 + d2 + d3 + d4 + d5;

    printf("Reverse Order: \n");
    ////printf("%d\t %d\t %d\t %d\t %d\t ",d5,d4,d3,d2,d1);
    printf("Sum:%d", sum);

    return 0;
}