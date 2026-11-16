/* UPES 100 Days of Code - Day 92 - Question 142 */
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
}
;
int main()
{
    struct Student s[5];
    for (int i=0;i<5;i++)scanf("%49s%d%f", s[i].name, &s[i].roll, &s[i].marks);
    for (int i=0;i<5;i++)printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    return 0;
}
