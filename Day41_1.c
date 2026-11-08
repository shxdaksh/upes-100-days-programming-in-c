/*
Day 41(1) - Question 81
String length without strlen
*/
#include <stdio.h>

int main()
{
    char s[500];
    int n=0;
    fgets(s, sizeof s, stdin);
    while (s[n]&&s[n]!='\n')n++;
    printf("%d", n);
    return 0;
}
