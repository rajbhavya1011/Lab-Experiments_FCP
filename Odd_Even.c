/*Check Even or Odd Number: Write a program that takes n as user input and
determines if it is even or odd.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%2==0)
    printf("Even Number");
    else
    printf("Odd Number");
}