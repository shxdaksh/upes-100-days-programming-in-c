/* UPES 100 Days of Code - Day 62 - Question 112 */
#include <stdio.h>

int main()
{
    int n, a[100], i, cur, best;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    cur=best=a[0];
    for (i=1;i<n;i++)
    {
        cur=(cur+a[i]>a[i])?cur+a[i]:a[i];
        if (cur>best)best=cur;
    }
    printf("%d", best);
    return 0;
}
