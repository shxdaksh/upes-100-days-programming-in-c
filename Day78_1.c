/* UPES 100 Days of Code - Day 78 - Question 128 */
#include <stdio.h>
#include <ctype.h>

int main()
{
    char fn[100];
    FILE*f;
    int c, v=0, co=0;
    scanf("%99s", fn);
    f=fopen(fn, "r");
    if (!f)return 1;
    while ((c=fgetc(f))!=EOF)if (isalpha(c))
    {
        c=tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v++;
        else co++;
    }
    fclose(f);
    printf("Vowels: %d\nConsonants: %d", v, co);
    return 0;
}
