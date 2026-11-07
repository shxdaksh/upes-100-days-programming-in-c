/*
Day 20(1) - Question 39
Product of odd digits
*/
#include <stdio.h>

int main()
{
    int n, d, p=1;
    scanf("%d", &n);
    if (n<0)n=-n;
    while (n)
    {
        d=n%10;
        if (d%2)p*=d;
        n/=10;
    }
    printf("%d", p);
    return 0;
}
