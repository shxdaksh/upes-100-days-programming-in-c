/*
Day 49(1) - Question 97
Initials of a name
*/
#include <stdio.h>

int main()
{
    char s[500];
    int i;
    fgets(s, sizeof s, stdin);
    if (s[0]&&s[0]!='\n')printf("%c.", s[0]);
    for (i=1;s[i];i++)if (s[i-1]==' '&&s[i]!=' ')printf("%c.", s[i]);
    return 0;
}
