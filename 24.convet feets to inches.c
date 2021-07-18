#include<stdio.h>
int main()
{
	int feet,inches;
	printf("\n enter the no.of feets:");
	scanf("%d",&feet);
	//1 feet = 12 inches//
	feet = feet*12;
	printf("\n feet = %d",feet);
	return(0);
}
