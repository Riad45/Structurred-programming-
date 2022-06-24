#include <stdio.h>
int main()
{
    int mark;
    printf("enter marks(0-100):\n");
    scanf("%d", &mark);

    switch (mark)
    {
    case 80 ... 100:

        printf("A+");
        break;
    case 75 ... 79:
        printf("A");
        break;
    case 70 ... 74:
        printf("A-");
        break;
    case 65 ... 69:
        printf("B+");
        break;
    case 60 ... 64:
        printf("B");
        break;
    case 55 ... 59:
        printf("B-");
        break;
    case 50 ... 54:
        printf("C+");
        break;
    case 45 ... 49:
        printf("C+");
        break;
    case 40 ... 44:
        printf("D");
        break;
    case 00 ... 39:
        printf("F");
        break;
    defult:
        printf("invalid");
    }

    return 0;
}