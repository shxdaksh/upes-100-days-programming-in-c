/* UPES 100 Days of Code - Day 86 - Question 136 */
#include <stdio.h>

int main()
{
    enum Choice
    {
        ADD=1, SUBTRACT, MULTIPLY
    }
    ;
    int ch, a, b;
    scanf("%d%d%d", &ch, &a, &b);
    switch (ch)
    {
        case ADD:printf("%d", a+b);
        break;
        case SUBTRACT:printf("%d", a-b);
        break;
        case MULTIPLY:printf("%d", a*b);
    }
    return 0;
}
