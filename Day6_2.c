/*
Day 6(2) - Question 12
Positive, negative or zero
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n>0) puts("Positive");
    else if (n<0) puts("Negative");
    else puts("Zero");
    return 0;
}
