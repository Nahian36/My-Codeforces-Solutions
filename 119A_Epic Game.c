#include <stdio.h>
int main()
{
    int a,b,n,i,gcd=0;
    scanf("%d %d %d", &a, &b, &n);
    p:
    if (n>=gcd)
    {
        if (a!=0 && n!=0)
        {
            for (i=0;i<a && i<n;i++)
            {
                if (a%(i+1)==0 && n%(i+1)==0)
                {
                    gcd=i+1;
                }
            }
        }
        else if (a!=0 && n==0)
        {
            printf("1");
            goto r;
        }
    }
    else
    {
        printf("1");
        goto r;
    }
    if (n>=gcd)
    {
        n=n-gcd;
        if (b!=0 && n!=0)
        {
            for (i=0;i<b && i<n;i++)
            {
                if (b%(i+1)==0 && n%(i+1)==0)
                {
                    gcd=i+1;
                }
            }
        }

        else if (b!=0 && n==0)
        {
            printf("0");
            goto q;
        }
    }
    else
    {
        printf("0");
        goto q;
    }
    if (n>=gcd)
    {
        n=n-gcd;
        goto p;
    }
    q:
    r:
    return 0;
}