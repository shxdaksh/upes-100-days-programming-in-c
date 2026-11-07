/*
Day 26(2) - Question 52
Irregular star pattern
*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)printf("*\n");
        putchar('\n');
    }
    for (i=3;i>=1;i--)
    {
        for (j=1;j<=i;j++)printf("*\n");
        putchar('\n');
    }
    return 0;
}
