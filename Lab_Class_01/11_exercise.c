#include <stdio.h>
int main()
{
    int amount, ten, fifty, hundred;

    printf("Enter the amount to be withdraw:\n");
    scanf("%d", &amount);

    ten = amount / 10;
    fifty = amount / 50;
    hundred = amount / 100;

    printf("The cashiar will give \n %d number of ten bill notes\n %d number of fifty bill notes\n %d number of hundred bill notes\n", ten, fifty, hundred);

    return 0;
}