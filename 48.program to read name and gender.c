#include<stdio.h>
int main()
{
	char name[40];
	char gender;
	printf("enter name:");
	gets(name);
	printf("enter gender(M/F):");
	scanf("%c",&gender);
	(gender == 'm'||gender =='M')?printf("Mr.%s.\n",name):printf("\nMrs.%s",name);
	return 0;
}
