#include<stdio.h>
int main()
{
	int cm,m,km;
	printf("\n enter cm:");
	scanf("%d",&cm);
	m = cm/100;
	km = cm/100000;
	printf("\cm to m = %d \n cm to km = %d",m,km);
	return 0;
	
}
