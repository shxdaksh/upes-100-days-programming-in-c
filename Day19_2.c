/*
Day 19(2) - Question 38
Sum of digits
*/
#include <stdio.h>

int main()
{
    int n, s=0;
    scanf("%d", &n);
    if (n<0)n=-n;
    while (n)
    {
        s+=n%10;
        n/=10;
    }
    printf("%d", s);
    return 0;
}
