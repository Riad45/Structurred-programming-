
// Simple Calculator

#include <stdio.h>
int main()
{
    char operation;
    double a, b, add, mul, sub, division;
    
    printf("Enter operation:\n");
    scanf("%c", &operation);
    printf("Enter the value of a:\n");
    scanf("%lf", &a);
    printf("Enter the value of b:\n");
    scanf("%lf", &b);

    switch (operation)
    {

    case '+':
        add = a + b;
        printf("%lf", add);
        break;

    case '-':
        sub = a - b;
        printf("%lf", sub);
        break;

    case '*':
        mul = a * b;
        printf("%lf", mul);
        break;

    case '/':
        division = a / b;
        printf("%lf", division);
        break;

    deafult:
        printf("No case");
    }

    return 0;
}