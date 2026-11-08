/* UPES 100 Days of Code - Day 55 - Question 105 */
#include <stdio.h>

int main()
{
    int n, a[100], i, j, c;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    for (i=0;i<n;i++)
    {
        c=0;
        for (j=0;j<n;j++)if (a[j]==a[i])c++;
        if (c>n/2)
        {
            printf("%d", a[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
