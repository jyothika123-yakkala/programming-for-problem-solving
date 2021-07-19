#include <stdio.h>  
   
int main() {  
    int a, b, maximum;  
   
    /* Take two numbers as input from user
  using scanf function */
    printf("Enter Two Integers\n");  
    scanf("%d %d", &a, &b);  
   
    if(a == b){
        printf("Both Equal\n");
        return 0;
    }
    /* Finds maximum using Ternary Operator */ 
    maximum = (a > b) ? a : b;  
   
    printf("%d is Maximum\n", maximum);  
   
    return 0;  
} 
