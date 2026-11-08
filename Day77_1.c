/* UPES 100 Days of Code - Day 77 - Question 127 */
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE*a=fopen("input.txt", "r"), *b;
    int c;
    if (!a)return 1;
    b=fopen("output.txt", "w");
    while ((c=fgetc(a))!=EOF)fputc(toupper(c), b);
    fclose(a);
    fclose(b);
    printf("Converted text saved to output.txt");
    return 0;
}
