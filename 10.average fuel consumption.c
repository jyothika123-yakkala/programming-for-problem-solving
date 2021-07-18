#include<stdio.h>
int main()
{
	int x;
	float y,averageconsumption;
	printf("\n total distance in km");
	scanf("%d",&x);
	printf("\n total fuel consumption");
	scanf("%f",&y);
	averageconsumption = x/y;
	printf("\n averageconsumption = %f",averageconsumption);
	return(0);
}
