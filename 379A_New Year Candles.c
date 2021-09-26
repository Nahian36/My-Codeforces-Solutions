#include <stdio.h>
int main()
{
    int a,b,div,mod,sum;
    scanf("%d %d", &a, &b);
    sum=a;
    while (a>=b)
    {
        div=a/b;
        mod=a%b;
        sum=sum+div;
        a=div+mod;
    }
    printf("%d", sum);
    return 0;
}