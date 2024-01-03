/*Sum of Array Elements: Write a program to calculate and return the sum of
elements of a 1-D array.
*/
#include <stdio.h>
int main()
{
    int n[5],sum=0;
    printf("Enter 5 numbers");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int j=0;j<5;j++){
    sum=sum+n[j];
    }
    printf("Sum of numbers is %d",sum);
}