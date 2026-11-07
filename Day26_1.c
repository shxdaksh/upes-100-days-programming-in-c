/*
Day 26(1) - Question 51
Indented number pattern
*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i=5;i>=1;i--)
    {
        for (j=1;j<i;j++)putchar(' ');
        for (j=i;j<=5;j++)printf("%d", j);
        putchar('\n');
    }
    return 0;
}
