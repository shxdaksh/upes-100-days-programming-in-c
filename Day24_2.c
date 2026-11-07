/*
Day 24(2) - Question 48
Number triangle 1 12 123
*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)printf("%d", j);
        putchar('\n');
    }
    return 0;
}
