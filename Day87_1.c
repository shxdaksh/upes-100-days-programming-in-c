/* UPES 100 Days of Code - Day 87 - Question 137 */
#include <stdio.h>

int main()
{
    enum Role
    {
        ADMIN, USER, GUEST
    }
    ;
    int r;
    scanf("%d", &r);
    if (r==ADMIN)printf("Welcome Admin!");
    else if (r==USER)printf("Welcome User!");
    else printf("Welcome Guest!");
    return 0;
}
