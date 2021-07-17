//programe that multiply two numbers without using * //
#include<stdio.h>
int main()
{
	int num1,num2,value ,i;
	printf("\n enter two numbers:");
	scanf("%d%d",&num1,&num2);
	value = 0;
	for(i = 1;i<=num2;i++)
	value = value+num1;
	printf("\nResult = %d",value);
	return(0);
}
