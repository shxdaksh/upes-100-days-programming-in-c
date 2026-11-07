/*
Day 30(1) - Question 59
Count even and odd in array
*/
#include <stdio.h>

int main()
{
    int n, a[100], i, e=0, o=0;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if (a[i]%2==0)e++;
        else o++;
    }
    printf("Even=%d, Odd=%d", e, o);
    return 0;
}
