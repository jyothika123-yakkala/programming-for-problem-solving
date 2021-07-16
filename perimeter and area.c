#include <stdio.h> 
int main() 
{
   int radius;
   float areaofcir, areaofrec, perimeterofcir,perimeterofrec,length,width;    
   printf("enter the radius of the circle =\n");
   scanf("%d",&radius);

   perimeterofcir = 2*3.14*radius;
   printf("Perimeter of the Circle = %f\n", perimeterofcir);
	
	areaofcir = 3.14*radius*radius;
	printf("Area of the Circle = %f\n", areaofcir);
	printf("enter the length of the rectangle\n");
	scanf("%f",&length);
	printf("width of the rectangle:\n");
	scanf("%f",&width);
	perimeterofrec = 2*(length*width);
	printf("perimeter of the rectangle = %f\n",perimeterofrec);
	areaofrec = length*width;
	printf("area of the rectangle = %f\n",areaofrec);
	

return(0);
}

