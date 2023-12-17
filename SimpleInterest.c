#include<stdio.h>
float interest(int p, int r, int t)
{
return ((p*r*t)/100);
}
void main()
{
    float pr, ra, ti, in;
    printf("Enter principal, rate and time respectively\n");
    scanf("%f",&pr);
    scanf("%f",&ra);
    scanf("%f",&ti);
    in = interest(pr,ra,ti);
    printf("Interest is: %f",in);
}