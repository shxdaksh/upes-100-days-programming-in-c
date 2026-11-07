/*
Day 22(2) - Question 44
Series 1 + 3/4 + 5/6 ...
*/
#include <stdio.h>

int main()
{
    int n, i;
    double s=1.0;
    scanf("%d", &n);
    for (i=2;i<=n;i++)s+=(2.0*i-1)/(2.0*i);
    printf("Approximate sum: %.2f", s);
    return 0;
}
