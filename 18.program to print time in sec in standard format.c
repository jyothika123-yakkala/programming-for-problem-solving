#include<stdio.h>
#include<math.h>

int main()
{
	 int sec, hh, mm, ss;
	 printf("Enter time in seconds: ");
	 scanf("%d", &sec);
	 hh = sec/3600;
	 mm = (sec-hh*3600)/60*60;
	 ss = sec - hh*3600 - mm*60;
	 printf("%d seconds = %d hours : %d minutes : %d seconds", sec, hh, ss, mm);
	 getch();
	 return(0);
}

