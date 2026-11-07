/*
Day 39(2) - Question 78
Main diagonal sum
*/
#include <stdio.h>

int main()
{
    int r, c, a[20][20], i, j, sum=0;
    scanf("%d%d", &r, &c);
    for (i=0;i<r;i++)for (j=0;j<c;j++)scanf("%d", &a[i][j]);
    for (i=0;i<r&&i<c;i++)sum+=a[i][i];
    printf("%d", sum);
    return 0;
}
