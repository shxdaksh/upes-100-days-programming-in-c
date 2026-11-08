/* UPES 100 Days of Code - Day 53 - Question 103 */
#include <stdio.h>

int main()
{
    int n, a[100], i, total=0, left=0, ans=-1;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        total+=a[i];
    }
    for (i=0;i<n;i++)
    {
        if (left==total-left-a[i])
        {
            ans=i;
            break;
        }
        left+=a[i];
    }
    printf("%d", ans);
    return 0;
}
