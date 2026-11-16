/* UPES 100 Days of Code - Day 93 - Question 143 */
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
    int n, top=0;
    struct Student s[100];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
    {
        scanf("%49s%d%f", s[i].name, &s[i].roll, &s[i].marks);
        if (s[i].marks>s[top].marks)top=i;
    }
    printf("Topper: %s (Marks: %.2f)", s[top].name, s[top].marks);
    return 0;
}
