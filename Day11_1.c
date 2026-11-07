/*
Day 11(1) - Question 21
Month name and days
*/
#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    const char *name[]=
    {
        "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    }
    ;
    int days[]=
    {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    }
    ;
    if (m>=1&&m<=12)printf("%s, %d days", name[m], days[m]);
    else puts("Invalid");
    return 0;
}
