/* UPES 100 Days of Code - Day 88 - Question 138 */
#include <stdio.h>

int main()
{
    enum Light
    {
        RED, YELLOW, GREEN
    }
    ;
    char*n[]=
    {
        "RED", "YELLOW", "GREEN"
    }
    ;
    for (int i=RED;i<=GREEN;i++)printf("%s=%d\n", n[i], i);
    return 0;
}
