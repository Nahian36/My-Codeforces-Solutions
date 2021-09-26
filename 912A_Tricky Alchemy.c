#include<stdio.h>
int main()
{
    long long int y,b,Y,G,B,diff,p,q,c=0,d=0;
    scanf("%I64d%I64d%I64d%I64d%I64d", &y,&b,&Y,&G,&B);
    p=2*Y+G;
    q=3*B+G;
    if(p>y)
    {
        c=p-y;
    }
    if(q>b)
    {
        d=q-b;
    }
    printf("%I64d", c+d);
    return 0;
}
