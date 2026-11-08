/*
Day 47(1) - Question 93
Anagrams
*/
#include <stdio.h>

int main()
{
    char a[500], b[500];
    int f[256]=
    {
        0
    }
    , i;
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);
    for (i=0;a[i]&&a[i]!='\n';i++)f[(unsigned char)a[i]]++;
    for (i=0;b[i]&&b[i]!='\n';i++)f[(unsigned char)b[i]]--;
    for (i=0;i<256;i++)if (f[i])
    {
        puts("Not anagrams");
        return 0;
    }
    puts("Anagrams");
    return 0;
}
