/*
Day 8(2) - Question 16
Largest of three numbers
*/
#include <stdio.h>

int main()
{
    int a, b, c, m;
    scanf("%d%d%d", &a, &b, &c);
    m=a;
    if (b>m)m=b;
    if (c>m)m=c;
    printf("Largest is %d", m);
    return 0;
}
