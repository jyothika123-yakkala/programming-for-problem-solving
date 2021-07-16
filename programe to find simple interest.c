#include<stdio.h>
int main()
{
	float principle,time,rate,SI;
	printf("enter the principle (amount):\n");
	scanf("%f",&principle);
	printf("enter the time: \n");
	scanf("%f",&time);
	printf("enter the rate: \n");
	scanf("%f",&rate);
	SI = (principle*time*rate)/100;
	printf("simple interest = %f",SI);
}
