/* UPES 100 Days of Code - Day 58 - Question 108 */
#include <stdio.h>

int main()
{
    int n, a[100], i, j;
    long long p;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    for (i=0;i<n;i++)
    {
        p=1;
        for (j=0;j<n;j++)if (i!=j)p*=a[j];
        printf("%lld%s", p, i==n-1?"":" ");
    }
    return 0;
}
