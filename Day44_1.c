/*
Day 44(1) - Question 87
Count spaces digits special characters
*/
#include <stdio.h>

int main()
{
    char s[500], c;
    int i, sp=0, d=0, special=0;
    fgets(s, sizeof s, stdin);
    for (i=0;s[i]&&s[i]!='\n';i++)
    {
        c=s[i];
        if (c==' ')sp++;
        else if (c>='0'&&c<='9')d++;
        else if (!((c>='A'&&c<='Z')||(c>='a'&&c<='z')))special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d", sp, d, special);
    return 0;
}
