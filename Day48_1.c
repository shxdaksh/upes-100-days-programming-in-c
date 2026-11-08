/*
Day 48(1) - Question 95
String rotation
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], b[200], d[400];
    int i, na=0, nb=0;
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);
    while (a[na]&&a[na]!='\n')na++;
    while (b[nb]&&b[nb]!='\n')nb++;
    if (na!=nb)
    {
        puts("Not rotation");
        return 0;
    }
    for (i=0;i<na;i++)
    {
        d[i]=a[i];
        d[i+na]=a[i];
    }
    d[2*na]='\0';
    puts(strstr(d, b)!=NULL?"Rotation":"Not rotation");
    return 0;
}
