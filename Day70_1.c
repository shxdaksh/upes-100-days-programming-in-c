/* UPES 100 Days of Code - Day 70 - Question 120 */
#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[500];
    int i, newword=1;
    fgets(s, 500, stdin);
    for (i=0;s[i];i++)
    {
        if (newword&&isalpha((unsigned char)s[i]))s[i]=toupper((unsigned char)s[i]);
        newword=(s[i]==' '||s[i]=='\t'||s[i]=='\n');
    }
    printf("%s", s);
    return 0;
}
