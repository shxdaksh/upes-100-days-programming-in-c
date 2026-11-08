/* UPES 100 Days of Code - Day 76 - Question 126 */
#include <stdio.h>

int main()
{
    char fn[100], s[200];
    FILE*f;
    scanf("%99s", fn);
    f=fopen(fn, "r");
    if (!f)
    {
        printf("Error: File does not exist!");
        return 0;
    }
    printf("File opened successfully.\n");
    while (fgets(s, 200, f))printf("%s", s);
    fclose(f);
    return 0;
}
