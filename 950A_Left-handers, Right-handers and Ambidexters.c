#include<stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d", &a,&b,&c);

    if(b<a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b-a<c)
    {
        c=c-(b-a);
        a=b;
        if(c==0)
        {
            printf("%d", 2*a);
        }
        else
        {
            printf("%d", (2*a)+2*(c/2));
        }
    }
    else
    {
        a=a+c;
        printf("%d", 2*a);
    }

    return 0;
}
