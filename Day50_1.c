/*
Day 50(1) - Question 99
Change date format to dd-Mon-yyyy
*/
#include <stdio.h>

int main()
{
    int d, m, y;
    const char *mon[]=
    {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    }
    ;
    scanf("%d/%d/%d", &d, &m, &y);
    if (m>=1&&m<=12)printf("%02d-%s-%04d", d, mon[m], y);
    else puts("Invalid date");
    return 0;
}
