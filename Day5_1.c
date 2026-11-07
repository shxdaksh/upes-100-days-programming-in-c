/*
Day 5(1) - Question 9
Simple and compound interest
*/
#include <stdio.h>

int main()
{
    double p, r, t, si, ci, amount=1;
    int i;
    scanf("%lf%lf%lf", &p, &r, &t);
    si=p*r*t/100;
    for (i=0;i<(int)t;i++) amount*=1+r/100;
    ci=p*amount-p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f", si, ci);
    return 0;
}
