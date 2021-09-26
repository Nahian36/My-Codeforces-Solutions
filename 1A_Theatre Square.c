#include <stdio.h>
int main()
{
    long long int m,n,a,p,q,r;
    scanf("%lld %lld %lld", &m, &n, &a);
    p=m/a;
    q=n/a;
    if (m%a!=0)
    p++;
    if (n%a!=0)
    q++;
    r=p*q;
    printf("%lld",r);
    return 0;
}