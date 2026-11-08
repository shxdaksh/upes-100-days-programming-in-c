/* UPES 100 Days of Code - Day 66 - Question 116 */
#include <stdio.h>

int main()
{
    int n, a[100], t, i, j;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d", &t);
    for (i=0;i<n;i++)for (j=i+1;j<n;j++)if (a[i]+a[j]==t)
    {
        printf("%d %d", i, j);
        return 0;
    }
    printf("-1 -1");
    return 0;
}
