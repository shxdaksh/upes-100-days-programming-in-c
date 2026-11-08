/*
Day 46(2) - Question 92
First repeating lowercase alphabet
*/
#include <stdio.h>

int main()
{
    char s[500];
    int f[26]=
    {
        0
    }
    , i;
    fgets(s, sizeof s, stdin);
    for (i=0;s[i];i++)if (s[i]>='a'&&s[i]<='z')
    {
        f[s[i]-'a']++;
        if (f[s[i]-'a']==2)
        {
            printf("%c", s[i]);
            return 0;
        }
    }
    puts("No repeating character");
    return 0;
}
