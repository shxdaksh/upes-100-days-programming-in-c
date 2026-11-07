/*
Day 10(1) - Question 19
Triangle classification
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a==b&&b==c)puts("Equilateral");
    else if (a==b||b==c||a==c)puts("Isosceles");
    else puts("Scalene");
    return 0;
}
