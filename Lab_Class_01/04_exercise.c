#include<stdio.h>
int main()
{
	float fahrenheit,centigrade;
	
	printf("Enter temperature of the city in fahrenheit:\n");
	scanf("%f",&fahrenheit);
	centigrade=(5.0/9.0)*(fahrenheit-32);
	printf("Temperature of the city in centigrade:\n%f ",centigrade);
	
	return 0;
}