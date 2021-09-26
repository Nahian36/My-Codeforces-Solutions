#include <stdio.h>
int main()
{
    int k,n,w,sum,z;
    scanf("%d%d%d", &k, &n, &w);
    sum=((w+1)*w*k)/2;
    z=sum-n;
    if(sum<n)
    {
        printf("0");
    }
    else
    {
        printf("%d", z);
    }
    return 0;
}