/*Write a program that uses two functions to swap two numbers
a. Using a third variable
b. Without using a third variable*/
#include<stdio.h>
int swap_3rd(int a,int b)
{
int t=a;
a=b;
b=t;
printf("a =%d, b=%d",a,b);
}
int swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("a =%d, b=%d",a,b);
}
int main()
{
    int n, a1, a2;
    printf("Enter 1 to swap with 3rd variable and 2 to swap without 3rd variable");
    scanf("%d",&n);
    printf("Enter two numbers");
    scanf("%d",&a1);
    scanf("%d",&a2);
    if(n==1) swap_3rd(a1, a2);
    if(n==2) swap(a1,a2);

}
