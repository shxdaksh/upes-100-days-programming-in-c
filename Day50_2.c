/*
Day 50(2) - Question 100
Print all substrings
*/
#include <stdio.h>

int main()
{
    char s[200];
    int n=0, i, j, k, first=1;
    scanf("%199s", s);
    while (s[n])n++;
    for (i=0;i<n;i++)for (j=i;j<n;j++)
    {
        if (!first)putchar(', ');
        for (k=i;k<=j;k++)putchar(s[k]);
        first=0;
    }
    return 0;
}
