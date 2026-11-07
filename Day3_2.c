/*
Day 3(2) - Question 6
Swap using third variable
*/
#include <stdio.h>

int main()
{
    int a, b, t;
    scanf("%d%d", &a, &b);
    t=a;
    a=b;
    b=t;
    printf("After swap: %d %d", a, b);
    return 0;
}
