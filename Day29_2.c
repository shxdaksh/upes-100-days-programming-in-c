/*
Day 29(2) - Question 58
Maximum and minimum in array
*/
#include <stdio.h>

int main()
{
    int n, a[100], i, mx, mn;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    mx=mn=a[0];
    for (i=1;i<n;i++)
    {
        if (a[i]>mx)mx=a[i];
        if (a[i]<mn)mn=a[i];
    }
    printf("Max=%d, Min=%d", mx, mn);
    return 0;
}
