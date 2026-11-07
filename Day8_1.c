/*
Day 8(1) - Question 15
Character type
*/
#include <stdio.h>

int main()
{
    char c;
    scanf(" %c", &c);
    if (c>='A'&&c<='Z') puts("Uppercase alphabet");
    else if (c>='a'&&c<='z') puts("Lowercase alphabet");
    else if (c>='0'&&c<='9') puts("Digit");
    else puts("Special character");
    return 0;
}
