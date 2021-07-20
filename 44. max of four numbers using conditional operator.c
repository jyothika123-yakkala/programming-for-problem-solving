#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,max1,max2,max;
	printf("enter four numbers:");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	max1=(n1>n2)?n1:n2;
	max2=(n3>n4)?n3:n4;
	max=(max1>max2)?max1:max2;
	printf("%d is maximum",max);
	return 0;
	
}
