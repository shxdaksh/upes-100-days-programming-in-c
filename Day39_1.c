/*
Day 39(1) - Question 77
Distinct diagonal elements
*/
#include <stdio.h>

int main()
{
    int r, c, a[20][20], i, j, ok=1, n;
    scanf("%d%d", &r, &c);
    for (i=0;i<r;i++)for (j=0;j<c;j++)scanf("%d", &a[i][j]);
    n=r<c?r:c;
    for (i=0;i<n;i++)for (j=i+1;j<n;j++)if (a[i][i]==a[j][j])ok=0;
    puts(ok?"True":"False");
    return 0;
}
