#include<stdio.h>
int main()
{
	int marks;
	printf("\nenter the marks:");
	scanf("%d",&marks);
	if(marks>100 || marks<0)
	printf ("\n your input is out of the range");
	else if(marks>=70)
	printf("\nhey! \n you passeed in first class");
	else if (marks>=60)
	printf("\n you passed in second class");	
	else if (marks<=60 || marks>40)
	printf("\n below average");	
	else if(marks<=40)
	printf("\n oh no! u failed ,better lock for the next time");
	else
	printf("\n happy holidays");
	return(0);
}
				

