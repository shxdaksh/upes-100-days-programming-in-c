/* UPES 100 Days of Code - Day 90 - Question 140 */
#include <stdio.h>

enum Gender
{
    MALE, FEMALE
}
;
struct Person
{
    char name[50];
    enum Gender gender;
}
;
int main()
{
    struct Person p;
    int g;
    scanf("%49s%d", p.name, &g);
    p.gender=g;
    printf("%s", p.gender==MALE?"Male":"Female");
    return 0;
}
