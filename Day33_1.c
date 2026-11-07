/*
Day 33(1) - Question 65
Binary search
*/
#include <stdio.h>

int main()
{
    int n, a[100], i, x, l=0, r, m, pos=-1;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d", &x);
    r=n-1;
    while (l<=r)
    {
        m=(l+r)/2;
        if (a[m]==x)
        {
            pos=m;
            break;
        }
        if (a[m]<x)l=m+1;
        else r=m-1;
    }
    if (pos<0)puts("-1");
    else printf("Found at index %d", pos);
    return 0;
}
