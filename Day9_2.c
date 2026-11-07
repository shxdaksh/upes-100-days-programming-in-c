/*
Day 9(2) - Question 18
Grade from percentage
*/
#include <stdio.h>

int main()
{
    int p;
    scanf("%d", &p);
    if (p>=90)puts("Grade A");
    else if (p>=80)puts("Grade B");
    else if (p>=70)puts("Grade C");
    else if (p>=60)puts("Grade D");
    else puts("Grade F");
    return 0;
}
