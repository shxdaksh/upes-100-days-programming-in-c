/*
Day 4(1) - Question 7
Swap without third variable
*/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: %d %d", a, b);
    return 0;
}
