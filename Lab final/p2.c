#include <stdio.h>
int main()
{
    int a, b, addition, substraction, multiply, division;

    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    addition = a + b;
    substraction = a - b;
    multiply = a * b;
    division = a / b;

    printf("Value of Addition=%d\n", addition);
    printf("Value of Subtract=%d\n", substraction);
    printf("Value of Multiply=%d\n", multiply);
    printf("Value of Division=%d\n", division);

    return 0;
}