#include <stdio.h>
int main()
{
    long long int a,b,c,sum=0;
    scanf("%I64d %I64d %I64d", &a, &b, &c);
    if (a==b)
    {
        sum=(2*a)+(2*c);
    }
    else if (a>b)
    {
        sum=(2*b)+(2*c)+1;
    }
    else
        sum=(2*a)+(2*c)+1;
    printf("%I64d", sum);
    return 0;
}