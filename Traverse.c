#include <stdio.h>
int main()
{
    int n[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    printf("Odd index no.s are:");
    for(int i=0; i<13; i++)
    {
        if(i%2!=0) printf("%d ",n[i]);
    }
}