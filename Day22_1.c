/*
Day 22(1) - Question 43
Strong number
*/
#include <stdio.h>

int main()
{
    int n, t, d, i, f, sum=0;
    scanf("%d", &n);
    t=n;
    while (t)
    {
        d=t%10;
        f=1;
        for (i=1;i<=d;i++)f*=i;
        sum+=f;
        t/=10;
    }
    puts(sum==n?"Strong number":"Not strong number");
    return 0;
}
