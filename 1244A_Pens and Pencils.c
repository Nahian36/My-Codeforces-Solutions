#include<stdio.h>
int main()
{
    int n,i,a,b,c,d,k,sum1,sum2;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d%d%d%d%d", &a,&b,&c,&d,&k);
        if(a%c==0)
            sum1=a/c;
        else
            sum1=(a/c)+1;
        if(b%d==0)
            sum2=b/d;
        else
            sum2=(b/d)+1;
        if(sum1+sum2<=k)
            printf("%d %d\n", sum1, sum2);
        else
            printf("-1\n");
    }
    return 0;
}