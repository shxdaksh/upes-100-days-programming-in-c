/*
Day 37(1) - Question 73
Row sums into array
*/
#include <stdio.h>

int main()
{
    int r, c, a[20][20], sum[20]=
    {
        0
    }
    , i, j;
    scanf("%d%d", &r, &c);
    for (i=0;i<r;i++)for (j=0;j<c;j++)scanf("%d", &a[i][j]);
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)sum[i]+=a[i][j];
        printf("%d ", sum[i]);
    }
    return 0;
}
