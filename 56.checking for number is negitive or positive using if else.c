#include<stdio.h>
int main()
{
	int num;
	printf("\n enter a  number:");
	scanf("%d",&num);
	if(num>0)
	printf("\n number is positive");
	else if(num<0)
	printf("\n number is negitive");
	else
	printf("\n number is zero");
	return(0);
}
