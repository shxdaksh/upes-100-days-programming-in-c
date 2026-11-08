/* UPES 100 Days of Code - Day 82 - Question 132 */
#include <stdio.h>

int main()
{
    enum Light
    {
        RED, YELLOW, GREEN
    }
    ;
    int x;
    scanf("%d", &x);
    switch (x)
    {
        case RED:printf("Stop");
        break;
        case YELLOW:printf("Wait");
        break;
        case GREEN:printf("Go");
    }
    return 0;
}
