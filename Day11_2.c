/*
Day 11(2) - Question 22
Profit or loss percentage
*/
#include <stdio.h>

int main()
{
    double cp, sp, p;
    scanf("%lf%lf", &cp, &sp);
    if (sp>cp)
    {
        p=(sp-cp)*100/cp;
        printf("Profit %.2f%%", p);
    }
    else if (sp<cp)
    {
        p=(cp-sp)*100/cp;
        printf("Loss %.2f%%", p);
    }
    else puts("No Profit No Loss");
    return 0;
}
