/* UPES 100 Days of Code - Day 75 - Question 125 */
#include <stdio.h>

int main()
{
    char fn[100], line[300];
    FILE*f;
    scanf("%99s", fn);
    getchar();
    fgets(line, 300, stdin);
    f=fopen(fn, "a");
    if (!f)return 1;
    fprintf(f, "%s", line);
    fclose(f);
    printf("File updated successfully with appended text.");
    return 0;
}
