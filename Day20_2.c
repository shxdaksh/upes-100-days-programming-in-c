/*
Day 20(2) - Question 40
One's complement of binary number
*/
#include <stdio.h>

int main()
{
    char s[100];
    int i;
    scanf("%99s", s);
    for (i=0;s[i];i++)putchar(s[i]=='0'?'1':'0');
    return 0;
}
