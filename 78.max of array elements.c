#include <stdio.h>

int main()
{    
    int array[100], maximum, size, n, location = 1;
    
    printf("Enter the number of elements in array\n");
    scanf("%d", &size);
    
    printf("Enter %d integers\n", size);
    
    for (n= 0; n < size; n++)
scanf("%d", &array[n]);
    
    maximum = array[0];
    
    for (n = 1; n< size; n++)
    {
        if (array[n] > maximum)
        {
        maximum  = array[n];
        location = n+1;
        }
    }
    
    printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
    return 0;    
}

