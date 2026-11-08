/*
Day 42(1) - Question 83
Count vowels and consonants
*/
#include <stdio.h>

int main()
{
    char s[500], c;
    int i, v=0, con=0;
    fgets(s, sizeof s, stdin);
    for (i=0;s[i];i++)
    {
        c=s[i];
        if (c>='A'&&c<='Z')c+=32;
        if (c>='a'&&c<='z')
        {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v++;
            else con++;
        }
    }
    printf("Vowels=%d, Consonants=%d", v, con);
    return 0;
}
