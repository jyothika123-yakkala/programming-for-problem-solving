#include<stdio.h>
int main()
{
	int basicsalary,perofDA,perofHRA,netsalary;
	printf("\n enter basicsalary:");
	scanf("%d",&basicsalary);
	perofDA =basicsalary*(80/100);
	perofHRA=basicsalary*(20/100);
	netsalary=perofDA+perofHRA+basicsalary;
	printf("\n netsalary=%d",netsalary);
	return 0;
	
	
}
