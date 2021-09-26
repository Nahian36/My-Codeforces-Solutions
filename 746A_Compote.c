#include<stdio.h>
int main()
{
    int a,b,c,i,x;
    scanf("%d%d%d", &a, &b, &c);
    if (b>=2 && c>=4)
    {
        for (i=1;i<=a;i++)
        {
            if (2*i<=b && 4*i<=c)
            {
                x=i;
            }
        }
        printf("%d", x+(2*x)+(4*x));
    }
    else
    {
        printf("0");
    }

    return 0;
}