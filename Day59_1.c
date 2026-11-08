/* UPES 100 Days of Code - Day 59 - Question 109 */
#include <stdio.h>

int main()
{
    int n, k, a[100], i, j, sum, max;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d", &k);
    max=-2147483647;
    for (i=0;i<=n-k;i++)
    {
        sum=0;
        for (j=i;j<i+k;j++)sum+=a[j];
        if (sum>max)max=sum;
    }
    printf("%d", max);
    return 0;
}
