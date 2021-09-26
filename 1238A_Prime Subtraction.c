#include<stdio.h>
int main()
{
    int n,i;
    long long int a,b;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%I64d%I64d", &a, &b);
        if (a-b<2)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
