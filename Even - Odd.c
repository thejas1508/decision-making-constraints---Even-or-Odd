#include <stdio.h> 
#include <stdlib.h>
void main()
{
int n;
printf("Check Whether a Number is POSITIVE OR NEGATIVE\n"); 
printf("Enter the Number:\n");
scanf("%d", &n); 
if(n>0)
printf("The Given Number %d is Positive\n",n); 
else if(n<0)
printf("The Given Number %d is Negative",n); 
else
printf("The Given Number %d is Neither Positive Nor Negative",n);
}
