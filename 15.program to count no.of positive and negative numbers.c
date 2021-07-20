#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,posi_count=0,negi_count=0;
	printf("\n enter 5 integers:");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	if(num1>0)
	posi_count = posi_count+1;
	else
	negi_count = negi_count+1;
	if(num2>0)
	posi_count = posi_count+1;
	else
	negi_count = negi_count+1;
	if(num3>0)
	posi_count = posi_count+1;
	else
	negi_count = negi_count+1;
	if(num4>0)
	posi_count = posi_count+1;
	else
	negi_count = negi_count+1;
	if(num5>0)
	posi_count = posi_count+1;
	else
	negi_count = negi_count+1;
	printf("\number of positive numbers = %d",posi_count);
	printf("\n number of negitive numbers = %d",negi_count);
	return 0;
}
