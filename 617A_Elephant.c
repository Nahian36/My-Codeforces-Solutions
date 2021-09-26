#include <stdio.h>
int main()
{
    int n,d,q;

    scanf("%d",&n);
    if(n>=1 && n<=1000000)
    {
    q=n/5;
    if(n<=5)
    {
        printf("1");
    }
    else
    {
        if(n>5)
        {
            d=n%5;
            {
                if(d==0)
                {
                    printf("%d",q);
                }
                if(d!=0)
                {
                    printf("%d",q+1);
                }
            }
        }
    }
    }
    return 0;
}