/*
Day 43(2) - Question 86
String palindrome
*/
#include <stdio.h>

int main()
{
    char s[500];
    int n=0, i, ok=1;
    fgets(s, sizeof s, stdin);
    while (s[n]&&s[n]!='\n')n++;
    for (i=0;i<n/2;i++)if (s[i]!=s[n-1-i])ok=0;
    puts(ok?"Palindrome":"Not palindrome");
    return 0;
}
