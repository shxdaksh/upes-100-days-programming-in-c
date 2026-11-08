/* UPES 100 Days of Code - Day 68 - Question 118 */
#include <stdio.h>

int main()
{
    int n, a[100], i, sum=0, expected;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    expected=n*(n+1)/2;
    printf("%d", expected-sum);
    return 0;
}
