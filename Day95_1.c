/* UPES 100 Days of Code - Day 95 - Question 145 */
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
}
;
struct Student top(struct Student s[], int n)
{
    struct Student t=s[0];
    for (int i=1;i<n;i++)if (s[i].marks>t.marks)t=s[i];
    return t;
}
int main()
{
    int n;
    struct Student s[100], t;
    scanf("%d", &n);
    for (int i=0;i<n;i++)scanf("%49s%d%f", s[i].name, &s[i].roll, &s[i].marks);
    t=top(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %.2f", t.name, t.roll, t.marks);
    return 0;
}
