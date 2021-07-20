#include<stdio.h>
int main()
{
	int i;
	char Name[100];
	char ch='@';
	printf("\nEnter a paragraph and end it with $ :\n");

	for(i=0;ch!='$';i++)
	{
		ch = getchar();
		Name[i]=ch;
	}
   Name[--i] = '\0';
   printf("\n\n The string is \n");
   puts(Name);
}

