/* UPES 100 Days of Code - Day 67 - Question 117 */
#include <stdio.h>

int main()
{
    int m, n, a[100], b[100], i=0, j=0;
    scanf("%d", &m);
    for (int x=0;x<m;x++)scanf("%d", &a[x]);
    scanf("%d", &n);
    for (int x=0;x<n;x++)scanf("%d", &b[x]);
    while (i<m&&j<n)printf("%d ", a[i]<b[j]?a[i++]:b[j++]);
    while (i<m)printf("%d ", a[i++]);
    while (j<n)printf("%d ", b[j++]);
    return 0;
}
