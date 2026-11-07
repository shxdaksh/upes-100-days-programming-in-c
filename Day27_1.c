/*
Day 27(1) - Question 53
Diamond-like star pattern
*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=2*i-1;j++)putchar('*');
        putchar('\n');
    }
    for (i=4;i>=1;i--)
    {
        for (j=1;j<=2*i-1;j++)putchar('*');
        putchar('\n');
    }
    return 0;
}
