/* UPES 100 Days of Code - Day 81 - Question 131 */
#include <stdio.h>

int main()
{
    enum Day
    {
        SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
    }
    ;
    char*n[]=
    {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    }
    ;
    for (int i=SUNDAY;i<=SATURDAY;i++)printf("%s = %d\n", n[i], i);
    return 0;
}
