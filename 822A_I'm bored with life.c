#include <stdio.h>
int main()
{
    int i,m,n,c1=1,c2=1,gcd=1;
    scanf ("%d %d", &m, &n);


    if (m>n)
    {
        for (i=0;i<n;i++)
        {
            gcd=gcd*(i+1);
        }
    }
    else
    {
        for (i=0;i<m;i++)
        {
            gcd=gcd*(i+1);
        }
    }
    printf("%d", gcd);
}