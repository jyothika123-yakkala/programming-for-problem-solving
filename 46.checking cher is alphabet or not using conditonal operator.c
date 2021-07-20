#include<stdio.h>
int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	((ch>=97 && ch<=122)||(ch>=65 && ch<=90))?printf("\nch=%c is character",ch):printf("not a character");
	return 0;
}
