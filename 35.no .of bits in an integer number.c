#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("number of bits in %d is %d",num,sizeof(num)*8);
	
	return 0;
	
}
