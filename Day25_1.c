/*
Day 25(1) - Question 49
Pattern 5 45 345 2345 12345
*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i=5;i>=1;i--)
    {
        for (j=i;j<=5;j++)printf("%d", j);
        putchar('\n');
    }
    return 0;
}
