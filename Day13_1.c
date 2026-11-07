/*
Day 13(1) - Question 25
Basic calculator
*/
#include <stdio.h>

int main()
{
    int a, b;
    char op;
    scanf("%d%d %c", &a, &b, &op);
    switch (op)
    {
        case '+':printf("%d", a+b);
        break;
        case '-':printf("%d", a-b);
        break;
        case '*':printf("%d", a*b);
        break;
        case '/':if (b)printf("%d", a/b);
        else puts("Division by zero");
        break;
        case '%':if (b)printf("%d", a%b);
        else puts("Division by zero");
        break;
        default:puts("Invalid");
    }
    return 0;
}
