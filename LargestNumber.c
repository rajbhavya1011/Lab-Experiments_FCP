#include <stdio.h>
int main()
{
    int n[5],g=0;
    printf("Enter 5 numbers");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int j=0;j<5;j++){
    if(g<n[j])
    g=n[j];
    }
    printf("Greatest number is %d",g);
}