#include <stdio.h>
int main()
{
    long long int n,sum;
    scanf("%I64d", &n);
    if (n%2==0)
    {
        sum=n/2;
    }
    else
    {
        sum=(n+1)/(-2);
    }
    printf("%I64d", sum);
    return 0;
}
 