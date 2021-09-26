#include <stdio.h>
int main()
{
    int z,n,i;
    long long int a[10000],b[10000],c[10000],sum[10000];
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%I64d %I64d %I64d", &a[i], &b[i], &c[i]);
        z=c[i]/2;
        sum[i]=(a[i]*(c[i]-z))-(b[i]*z);
    }
    for (i=0;i<n;i++)
    {
        printf("%I64d\n", sum[i]);
    }
    return 0;
}