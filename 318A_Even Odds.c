#include <stdio.h>
int main()
{
    int i;
    long long int n,k,a;
    scanf("%I64d %I64d", &n, &k);
    long long int ans;
    if (n%2==0) a=n/2;
    else a=(n+1)/2;
    if (k>a)
    {
        ans=(k-a)*2;
    }

    else
    {
        ans=2*k-1;
    }
    printf("%I64d", ans);
    return 0;

}
 