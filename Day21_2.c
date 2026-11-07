/*
Day 21(2) - Question 42
Perfect number
*/
#include <stdio.h>

int main()
{
    int n, i, s=0;
    scanf("%d", &n);
    for (i=1;i<=n/2;i++)if (n%i==0)s+=i;
    puts(s==n?"Perfect number":"Not perfect number");
    return 0;
}
