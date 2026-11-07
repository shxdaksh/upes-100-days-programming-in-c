/*
Day 10(2) - Question 20
Day of week using switch
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    const char *d[]=
    {
        "", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    }
    ;
    if (n>=1&&n<=7)puts(d[n]);
    else puts("Invalid");
    return 0;
}
