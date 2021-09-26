#include<stdio.h>
int main()
{
    long long int n,i,x;
    scanf("%I64d", &n);
    if (n%3==0)
    {
        printf("%I64d", 2*n/3);
    }
    else
    {
        printf("%I64d", 2*(n-n%3)/3+1);
    }
    return 0;
}