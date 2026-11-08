/* UPES 100 Days of Code - Day 72 - Question 122 */
#include <stdio.h>

int main()
{
    FILE*f=fopen("info.txt", "r");
    char s[200];
    if (!f)
    {
        printf("File not found");
        return 0;
    }
    while (fgets(s, 200, f))printf("%s", s);
    fclose(f);
    return 0;
}
