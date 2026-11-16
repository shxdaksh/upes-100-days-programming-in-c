/* UPES 100 Days of Code - Day 94 - Question 144 */
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
}
;
void show(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %.2f", s.name, s.roll, s.marks);
}
int main()
{
    struct Student s;
    scanf("%49s%d%f", s.name, &s.roll, &s.marks);
    show(s);
    return 0;
}
