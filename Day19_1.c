/*
Day 19(1) - Question 37
LCM
*/
#include <stdio.h>

int main()
{
    int a, b, x, y, t, g;
    scanf("%d%d", &a, &b);
    x=a;
    y=b;
    while (y)
    {
        t=x%y;
        x=y;
        y=t;
    }
    g=x;
    printf("%d", a/g*b);
    return 0;
}
