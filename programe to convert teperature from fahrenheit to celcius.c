#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("\n enter temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius = ((fahrenheit-32)*5)/9;
	printf("\n temperature in celsius is: %f",celsius);
	return(0);
}
