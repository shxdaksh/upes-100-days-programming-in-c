/* UPES 100 Days of Code - Day 51 - Question 101 */
#include <stdio.h>

int main()
{
    int n, a[100], t, i, first=-1, last=-1;
    scanf("%d", &n);
    for (i=0;i<n;i++) scanf("%d", &a[i]);
    scanf("%d", &t);
    for (i=0;i<n;i++) if (a[i]==t)
    {
        if (first==-1) first=i;
        last=i;
    }
    printf("%d %d", first, last);
    return 0;
}
