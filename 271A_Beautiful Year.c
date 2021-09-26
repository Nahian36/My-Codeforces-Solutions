#include <stdio.h>
int main()
{
    int n,i,x,j,div,rem[4];
    scanf("%d", &n);
    n=n+1;
    p:
    x=n;
    for (i=3;i>=0;i--)
    {
        div=x/10;
        if (div==0)
        {
            div=1;
        }
        rem[i]=x%10;
        x=div;
    }
    for (i=0;i<3;i++)
    {
        for (j=i+1;j<4;j++)
        {
            if (rem[i]==rem[j])
            {
                n++;
                goto p;
            }
            else
            {
                continue;
            }
        }
    }

        printf("%d", n);
    return 0;
}