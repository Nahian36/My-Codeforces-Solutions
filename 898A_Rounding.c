#include<stdio.h>
#include<string.h>
int main()
{
    long long int n;
    scanf("%I64d", &n);
    if (n%10==0)
    {
        printf("%I64d", n);
    }
    else if (n%10!=0 && n%5==0)
    {
        printf("%I64d", n-5);
    }
    else if (n%10>5)
    {
        printf("%I64d", n+10-(n%10));
    }
    else if (n%10<5)
    {
        printf("%I64d", n-(n%10));
    }
    return 0;
}