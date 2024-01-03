/*Calculate Factorial using Loops: Write a program to calculate the factorial of a
number using a for loop and return its value*/
#include <stdio.h>
int main()
{
int n,f=1;
printf("Enter a number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    f=f*i;
}
printf("Factorial of %d = %d",n,f);
}
