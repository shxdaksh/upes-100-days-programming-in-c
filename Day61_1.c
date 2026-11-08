/* UPES 100 Days of Code - Day 61 - Question 111 */
#include <stdio.h>

int main()
{
    int n, k, a[100], i, j, x;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i=0;i<=n-k;i++)
    {
        x=0;
        for (j=i;j<i+k;j++)if (a[j]<0)
        {
            x=a[j];
            break;
        }
        printf("%d ", x);
    }
    return 0;
}
