/* Sum of Natural Numbers: Given a positive integer n, write a program to calculate
and return the sum of natural numbers up to n using loops.
*/
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum = %d",sum);
}