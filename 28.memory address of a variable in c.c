#include<stdio.h>
int main()
{
	int num;
	char word;
	printf("\nenter the character:");
	scanf("%c",&word);
	
	printf("\n the memory location of the given number is %u",&word);
	printf("\nenter a integer:");
	scanf("%d",&num);
	
	printf("\n the memory location of the given number is %u");
	return 0;
}
