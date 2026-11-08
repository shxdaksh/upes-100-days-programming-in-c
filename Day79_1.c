/* UPES 100 Days of Code - Day 79 - Question 129 */
#include <stdio.h>

int main()
{
    FILE*f=fopen("numbers.txt", "r");
    int x, n=0;
    long sum=0;
    if (!f)return 1;
    while (fscanf(f, "%d", &x)==1)
    {
        sum+=x;
        n++;
    }
    fclose(f);
    printf("Sum = %ld\nAverage = %.2f", sum, n?(double)sum/n:0);
    return 0;
}
