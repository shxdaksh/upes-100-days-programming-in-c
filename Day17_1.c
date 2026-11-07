/*
Day 17(1) - Question 33
Armstrong number
*/
#include <stdio.h>

int main()
{
    int n, x, digits=0, sum=0, t, d, i, p;
    scanf("%d", &n);
    x=n;
    t=n;
    do
    {
        digits++;
        t/=10;
    }
    while (t);
    t=n;
    while (t)
    {
        d=t%10;
        p=1;
        for (i=0;i<digits;i++)p*=d;
        sum+=p;
        t/=10;
    }
    puts(sum==x?"Armstrong":"Not Armstrong");
    return 0;
}
