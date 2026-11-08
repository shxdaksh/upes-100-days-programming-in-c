/*
Day 46(1) - Question 91
Remove vowels
*/
#include <stdio.h>

int main()
{
    char s[500], c;
    int i;
    fgets(s, sizeof s, stdin);
    for (i=0;s[i];i++)
    {
        c=s[i];
        if (c>='A'&&c<='Z')c+=32;
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))putchar(s[i]);
    }
    return 0;
}
