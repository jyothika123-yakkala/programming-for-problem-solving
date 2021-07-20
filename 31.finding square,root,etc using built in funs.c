#include<stdio.h>
#include<math.h>
int main()
{
	float num;
	printf("enter a number:");
	scanf("%f",&num);
	printf("square of the number if %0.2f",pow(num,2));
	printf("\ncube of the number if %0.2f",pow(num,3));
	printf("\nfloor of the number is %i",(int)floor(num));
	printf("\nceil of the number is %i",(int)ceil(num));
	return 0;
}
