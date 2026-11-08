/* UPES 100 Days of Code - Day 56 - Question 106 */
#include <stdio.h>

int main()
{
    int n, a[100], i, j, ans;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    for (i=0;i<n;i++)
    {
        ans=-1;
        for (j=i+1;j<n;j++)if (a[j]>a[i])
        {
            ans=a[j];
            break;
        }
        printf("%d%s", ans, i==n-1?"":" ");
    }
    return 0;
}
