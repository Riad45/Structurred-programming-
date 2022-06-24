#include<stdio.h>
int main()
{
	float a,b,addition,subtraction; 
    printf("Enter a float number:");
	scanf("%f",&a);
	printf("Enter a float number:");
	scanf("%f",&b);
	addition=a+b;
	subtraction=a-b;	
	printf("Addition:%.2f\n",addition);
	printf("Subtraction:%.2f\n",subtraction);
	
	return 0;
	
}