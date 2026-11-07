/*
Day 18(2) - Question 36
HCF GCD
*/
#include <stdio.h>

int main()
{
    int a, b, t;
    scanf("%d%d", &a, &b);
    while (b)
    {
        t=a%b;
        a=b;
        b=t;
    }
    printf("%d", a);
    return 0;
}
