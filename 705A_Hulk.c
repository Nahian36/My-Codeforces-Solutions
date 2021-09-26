#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        if ((i+1)%2==0)
            printf("I love");
        else
            printf("I hate");
        if ((i+1)==n)
            printf(" it");
        else
            printf(" that ");
    }
    return 0;
}