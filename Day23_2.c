/*
Day 23(2) - Question 46
5x5 star pattern
*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)putchar('*');
        putchar('\n');
    }
    return 0;
}
