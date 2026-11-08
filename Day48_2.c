/*
Day 48(2) - Question 96
Reverse each word
*/
#include <stdio.h>

int main()
{
    char s[500];
    int i=0, start, j;
    fgets(s, sizeof s, stdin);
    while (s[i])
    {
        while (s[i]==' ')putchar(s[i++]);
        start=i;
        while (s[i]&&s[i]!=' '&&s[i]!='\n')i++;
        for (j=i-1;j>=start;j--)putchar(s[j]);
        if (s[i]=='\n')break;
    }
    return 0;
}
