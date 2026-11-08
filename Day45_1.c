/*
Day 45(1) - Question 89
Character frequency
*/
#include <stdio.h>

int main()
{
    char s[500], x;
    int i, c=0;
    fgets(s, sizeof s, stdin);
    scanf(" %c", &x);
    for (i=0;s[i];i++)if (s[i]==x)c++;
    printf("%d", c);
    return 0;
}
