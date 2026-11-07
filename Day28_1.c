/*
Day 28(1) - Question 55
Prime numbers 1 to n
*/
#include <stdio.h>

int main()
{
    int n, x, i, prime;
    scanf("%d", &n);
    for (x=2;x<=n;x++)
    {
        prime=1;
        for (i=2;i*i<=x;i++)if (x%i==0)
        {
            prime=0;
            break;
        }
        if (prime)printf("%d ", x);
    }
    return 0;
}
