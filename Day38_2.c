/*
Day 38(2) - Question 76
Symmetric matrix
*/
#include <stdio.h>

int main()
{
    int r, c, a[20][20], i, j, ok=1;
    scanf("%d%d", &r, &c);
    for (i=0;i<r;i++)for (j=0;j<c;j++)scanf("%d", &a[i][j]);
    if (r!=c)ok=0;
    for (i=0;i<r&&ok;i++)for (j=0;j<c;j++)if (a[i][j]!=a[j][i])ok=0;
    puts(ok?"True":"False");
    return 0;
}
