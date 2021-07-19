[9:52 PM, 7/19/2021] Prathibha ????: #include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,root1,root2,realpart,imgpart;
	printf("coffecients of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	D=b*b-4*a*c;
	if (D>0)
	
		root1=-b+sqrt(b*b-4*a*c)/(2*a);
		root2=-b-sqrt(b*b-4*a*c)/(2*a);
		printf("root1 = %f and root2 = %f",root1,root2);
	else if(D=0)
	
		root1=root2==b/(2*a);
		printf("root1 = root2 = %f",root1);
	
	else if(D<0)
	
		realpart=-b/(2*a);
		imgpart=sqrt(-D)/(2*a);
		printf("root1 = %f+%fi and root2 = %f-%fi",realpart,imgpart);
	}
	
}
