/* UPES 100 Days of Code - Day 74 - Question 124 */
#include <stdio.h>

int main()
{
    char s[100], d[100];
    int c;
    FILE*a, *b;
    scanf("%99s%99s", s, d);
    a=fopen(s, "r");
    if (!a)return 1;
    b=fopen(d, "w");
    while ((c=fgetc(a))!=EOF)fputc(c, b);
    fclose(a);
    fclose(b);
    printf("File copied successfully");
    return 0;
}
