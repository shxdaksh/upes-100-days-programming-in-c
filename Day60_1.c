/* UPES 100 Days of Code - Day 60 - Question 110 */
#include <stdio.h>

int main()
{
    int n, k, a[100], i, j, m;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i=0;i<=n-k;i++)
    {
        m=a[i];
        for (j=i+1;j<i+k;j++)if (a[j]>m)m=a[j];
        printf("%d ", m);
    }
    return 0;
}
