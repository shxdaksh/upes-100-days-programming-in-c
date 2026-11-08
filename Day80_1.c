/* UPES 100 Days of Code - Day 80 - Question 130 */
#include <stdio.h>

int main()
{
    FILE*f;
    char name[50];
    int n, i, roll;
    float marks;
    scanf("%d", &n);
    f=fopen("students.txt", "w");
    for (i=0;i<n;i++)
    {
        scanf("%49s%d%f", name, &roll, &marks);
        fprintf(f, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(f);
    f=fopen("students.txt", "r");
    while (fscanf(f, "%49s%d%f", name, &roll, &marks)==3)printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    fclose(f);
    return 0;
}
