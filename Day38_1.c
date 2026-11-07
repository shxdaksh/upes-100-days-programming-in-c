/*
Day 38(1) - Question 75
Add two matrices
*/
#include <stdio.h>

int main()
{
    int r, c, r2, c2, a[20][20], b[20][20], i, j;
    scanf("%d%d", &r, &c);
    for (i=0;i<r;i++)for (j=0;j<c;j++)scanf("%d", &a[i][j]);
    scanf("%d%d", &r2, &c2);
    for (i=0;i<r2;i++)for (j=0;j<c2;j++)scanf("%d", &b[i][j]);
    if (r!=r2||c!=c2)
    {
        puts("Cannot add");
        return 0;
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)printf("%d ", a[i][j]+b[i][j]);
        putchar('\n');
    }
    return 0;
}
