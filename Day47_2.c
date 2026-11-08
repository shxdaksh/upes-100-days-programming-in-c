/*
Day 47(2) - Question 94
Longest word
*/
#include <stdio.h>

int main()
{
    char s[500], best[500];
    int i=0, start=0, len=0, bstart=0, blen=0, j;
    fgets(s, sizeof s, stdin);
    while (1)
    {
        if (s[i]==' '||s[i]=='\n'||s[i]=='\0')
        {
            len=i-start;
            if (len>blen)
            {
                blen=len;
                bstart=start;
            }
            if (s[i]=='\0'||s[i]=='\n')break;
            start=i+1;
        }
        i++;
    }
    for (j=0;j<blen;j++)best[j]=s[bstart+j];
    best[blen]='\0';
    puts(best);
    return 0;
}
