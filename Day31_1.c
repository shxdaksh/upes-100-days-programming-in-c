/*
Day 31(1) - Question 61
Linear search
*/
#include <stdio.h>

int main()
{
    int n, a[100], i, x, pos=-1;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d", &x);
    for (i=0;i<n;i++)if (a[i]==x)
    {
        pos=i;
        break;
    }
    if (pos==-1)puts("-1");
    else printf("Found at index %d", pos);
    return 0;
}
