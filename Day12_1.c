/*
Day 12(1) - Question 23
Library fine
*/
#include <stdio.h>

int main()
{
    int d, f;
    scanf("%d", &d);
    if (d>30)puts("Membership Cancelled");
    else
    {
        if (d<=5)f=d*2;
        else if (d<=10)f=10+(d-5)*4;
        else f=30+(d-10)*6;
        printf("Fine Rs.%d", f);
    }
    return 0;
}
