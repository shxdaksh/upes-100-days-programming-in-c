/* UPES 100 Days of Code - Day 84 - Question 134 */
#include <stdio.h>

int main()
{
    enum Status
    {
        SUCCESS, FAILURE, TIMEOUT
    }
    ;
    int s;
    scanf("%d", &s);
    if (s==SUCCESS)printf("Operation successful");
    else if (s==FAILURE)printf("Operation failed");
    else printf("Operation timed out");
    return 0;
}
