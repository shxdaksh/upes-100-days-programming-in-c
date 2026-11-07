/*
Day 16(1) - Question 31
Decimal to binary
*/
#include <stdio.h>

int main()
{
    unsigned int n, mask=1;
    scanf("%u", &n);
    if (n==0)
    {
        puts("0");
        return 0;
    }
    while (mask<=n/2)mask*=2;
    while (mask)
    {
        printf("%d", (n&mask)?1:0);
        mask/=2;
    }
    return 0;
}
