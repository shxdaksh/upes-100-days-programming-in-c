/*
Day 49(2) - Question 98
Initials with surname full
*/
#include <stdio.h>

int main()
{
    char s[500];
    int i, last=0;
    fgets(s, sizeof s, stdin);
    for (i=0;s[i]&&s[i]!='\n';i++)if (s[i]==' ')last=i+1;
    if (last==0)
    {
        puts(s);
        return 0;
    }
    printf("%c.", s[0]);
    for (i=1;i<last;i++)if (s[i-1]==' '&&i<last-1)printf("%c.", s[i]);
    printf(" %s", s+last);
    return 0;
}
