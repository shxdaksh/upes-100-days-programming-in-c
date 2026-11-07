/*
Day 6(1) - Question 11
Even or odd
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d is %s", n, n%2?"odd":"even");
    return 0;
}
