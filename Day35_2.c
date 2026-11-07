/*
Day 35(2) - Question 70
Rotate array right by k
*/
#include <stdio.h>

int main()
{
    int n, a[100], b[100], i, k;
    scanf("%d", &n);
    for (i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d", &k);
    k%=n;
    for (i=0;i<n;i++)b[(i+k)%n]=a[i];
    for (i=0;i<n;i++)printf("%d ", b[i]);
    return 0;
}
