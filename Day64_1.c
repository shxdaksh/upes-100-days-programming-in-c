/* UPES 100 Days of Code - Day 64 - Question 114 */
#include <stdio.h>

int main()
{
    char s[500];
    int seen[256], i, j, max=0, len;
    fgets(s, 500, stdin);
    for (i=0;s[i]&&s[i]!='\n';i++)
    {
        for (j=0;j<256;j++)seen[j]=0;
        len=0;
        for (j=i;s[j]&&s[j]!='\n';j++)
        {
            unsigned char c=s[j];
            if (seen[c])break;
            seen[c]=1;
            len++;
        }
        if (len>max)max=len;
    }
    printf("%d", max);
    return 0;
}
