/* UPES 100 Days of Code - Day 71 - Question 121 */
#include <stdio.h>

int main()
{
    FILE *f;
    char name[100];
    int age;
    scanf("%99s%d", name, &age);
    f=fopen("info.txt", "w");
    if (!f)return 1;
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    printf("File created successfully! Data written to info.txt");
    return 0;
}
