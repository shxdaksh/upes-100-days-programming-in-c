/*
Day 7(1) - Question 13
Leap year
*/
#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);
    if ((y%400==0)||(y%4==0&&y%100!=0)) puts("Leap year");
    else puts("Not a leap year");
    return 0;
}
