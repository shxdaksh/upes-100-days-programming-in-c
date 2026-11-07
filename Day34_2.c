/*
Day 34(2) - Question 68
Delete array element by position
*/
#include <stdio.h>

int main()
{
    int n, a[100], i, pos;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d", &pos);
    for (i=pos;i<n-1;i++)a[i]=a[i+1];
    n--;
    for (i=0;i<n;i++)printf("%d ", a[i]);
    return 0;
}
