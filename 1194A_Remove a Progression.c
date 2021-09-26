#include<stdio.h>
int main()
{
    int i,t;
    long long int n,x;
    scanf("%d", &t);
    for (i=0;i<t;i++)
    {
        scanf("%I64d %I64d", &n, &x);
        printf("%I64d\n", x*2);
    }
    return 0;
}