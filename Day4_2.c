/*
Day 4(2) - Question 8
Sum of first n natural numbers
*/
#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("Sum=%lld", n*(n+1)/2);
    return 0;
}
