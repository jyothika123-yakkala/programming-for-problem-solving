#include<stdio.h>
int main()
{
	int ch;
	printf("enter character:");
	scanf("%c",&ch);
	((ch>='0' && ch<='9'))?printf("\nch=%c is a digit",ch):printf("not a digit");
	
}
