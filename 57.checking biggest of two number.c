#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\n enter tuo numbers:");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	printf("\n num1 is biggest ");
	else if(num2>num1)
	printf("\n num2 is biggest");
	else
	printf("\n both are equal");
}
