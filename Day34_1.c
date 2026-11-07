/*
Day 34(1) - Question 67
Insert at given position
*/
#include <stdio.h>

int main()
{
    int n, a[101], i, pos, x;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d%d", &pos, &x);
    for (i=n;i>pos;i--)a[i]=a[i-1];
    a[pos]=x;
    n++;
    for (i=0;i<n;i++)printf("%d ", a[i]);
    return 0;
}
