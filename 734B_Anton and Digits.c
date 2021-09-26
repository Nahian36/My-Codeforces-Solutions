#include <stdio.h>
int main()
{
    int a,b,c,d,min,sum=0,i;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    min=a;
    if (min>c)
        min=c;
    if (min>d)
        min=d;
    for (i=0;i<min;i++)
    {
        sum=sum+256;
    }
    a=a-min;
    c=c-min;
    d=d-min;
    if (a>b)
        sum=sum+(32*b);
    else
        sum=sum+(32*a);
    printf("%d", sum);
    return 0;
}