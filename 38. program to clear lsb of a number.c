#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);

	printf(" %d",(~0<<1)&num);
	
	return 0;
