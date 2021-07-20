#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,posi_num=0,negi_num=0;
	printf("\n enter 5 integers:");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	if(num1>0)
	 posi_num = posi_num+num1;
	else
	negi_num = negi_num+num1;
	if(num2>0)
	posi_num = posi_num+num2;
	else
	negi_num= negi_num+num2;
	if(num3>0)
	posi_num = posi_num+num3;
	else
	negi_num = negi_num+num3;
	if(num4>0)
	posi_num = posi_num+num4;
	else
	negi_num = negi_num+num4;
	if(num5>0)
	posi_num = posi_num+num5;
	else
	negi_num = negi_num+num5;
	printf("\n sum of positive numbers = %d",posi_num);
	printf("\n sum of negitive numbers = %d",negi_num);
	return 0;
	
}
