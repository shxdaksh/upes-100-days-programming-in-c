/*
Day 21(1) - Question 41
Swap first and last digit
*/
#include <stdio.h>

int main()
{
    int n, temp, p=1, first, last, middle, result;
    scanf("%d", &n);
    if (n<10)
    {
        printf("%d", n);
        return 0;
    }
    temp=n;
    while (temp>=10)
    {
        temp/=10;
        p*=10;
    }
    first=n/p;
    last=n%10;
    middle=(n%p)/10;
    result=last*p+middle*10+first;
    printf("%d", result);
    return 0;
}
