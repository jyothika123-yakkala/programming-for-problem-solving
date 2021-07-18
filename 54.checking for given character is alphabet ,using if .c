#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z')||(ch>='A' && ch<='z'))
	printf("\nthe entered character %c is an alphabet",ch);
return(0);
	
}
