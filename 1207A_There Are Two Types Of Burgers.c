#include <stdio.h>
int main()
{
    int n,b,p,f,h,c,i,sum,half;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d%d%d%d%d", &b,&p,&f,&h,&c);
        if(b<2)
        {
            printf("0\n");
        }
        else if (2*(p+f)<=b)
        {
            sum=(h*p)+(c*f);
            printf("%d\n", sum);
        }
        else
        {
            half=b/2;
            if(h>c)
            {
                if(p>=half)
                {
                    sum=half*h;
                }
                else
                {
                    sum=(p*h)+(half-p)*c;
                }
            }
            else
            {
                if(f>=half)
                {
                    sum=half*c;
                }
                else
                {
                    sum=(f*c)+(half-f)*h;
                }
            }
            printf("%d\n", sum);
        }

    }
    return 0;
}