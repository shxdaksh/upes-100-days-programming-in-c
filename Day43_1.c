/*
Day 43(1) - Question 85
Reverse string
*/
#include <stdio.h>

int main()
{
    char s[500];
    int n=0, i;
    fgets(s, sizeof s, stdin);
    while (s[n]&&s[n]!='\n')n++;
    for (i=n-1;i>=0;i--)putchar(s[i]);
    return 0;
}
