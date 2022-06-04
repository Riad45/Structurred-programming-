#include <stdio.h>
int main()
{

    int value = 30;
    int index = value / 10;

    switch (index)
    {
    case 1:
        printf("This is case 1");
        break;
    case 2:
        printf("This is case 2");
        break;
    case 3:
        printf("This is case 3");
        break;
    case 4:
        printf("This is case 4");
        break;
    default:
        printf("No case");
        break;
    }

    return 0;
}