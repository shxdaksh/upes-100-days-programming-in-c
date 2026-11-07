/*
Day 2(1) - Question 3
Area and perimeter of rectangle
*/
#include <stdio.h>

int main()
{
    int l, b;
    scanf("%d%d", &l, &b);
    printf("Area=%d, Perimeter=%d", l*b, 2*(l+b));
    return 0;
}
