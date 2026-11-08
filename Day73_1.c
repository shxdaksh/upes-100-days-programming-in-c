/* UPES 100 Days of Code - Day 73 - Question 123 */
#include <stdio.h>
#include <ctype.h>

int main()
{
    char fn[100];
    FILE*f;
    int c, chars=0, words=0, lines=0, in=0;
    scanf("%99s", fn);
    f=fopen(fn, "r");
    if (!f)return 1;
    while ((c=fgetc(f))!=EOF)
    {
        chars++;
        if (c=='\n')lines++;
        if (isspace(c))in=0;
        else if (!in)
        {
            words++;
            in=1;
        }
    }
    fclose(f);
    printf("Characters: %d\nWords: %d\nLines: %d", chars, words, lines+(chars>0));
    return 0;
}
