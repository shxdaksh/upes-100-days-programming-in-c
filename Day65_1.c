/* UPES 100 Days of Code - Day 65 - Question 115 */
#include <stdio.h>

int main()
{
    char a[200], b[200];
    int f[256]=
    {
        0
    }
    , i;
    scanf("%199s%199s", a, b);
    for (i=0;a[i];i++)f[(unsigned char)a[i]]++;
    for (i=0;b[i];i++)f[(unsigned char)b[i]]--;
    for (i=0;i<256;i++)if (f[i])
    {
        printf("Not Anagram");
        return 0;
    }
    printf("Anagram");
    return 0;
}
