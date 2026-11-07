/*
Day 16(2) - Question 32
Number palindrome
*/
#include <stdio.h>

int main()
{
    int n, x, r=0;
    scanf("%d", &n);
    x=n;
    while (x)
    {
        r=r*10+x%10;
        x/=10;
    }
    puts(r==n?"Palindrome":"Not palindrome");
    return 0;
}
