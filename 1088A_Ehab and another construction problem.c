#include <stdio.h>
int main()
{
    int a,b,x,i,j,count=0;
    scanf("%d", &x);
    for (i=1;i<=x;i++)
    {
        for (j=1;j<=x;j++)
        {
            if (((i%j)==0)&&((i*j)>x)&&((i/j)<x))
            {
                count=1;
                printf("%d %d\n", i,j);
                goto p;
            }
        }
    }
    p:
    if (count==0)
    {
        printf("-1");
    }
    return 0;
}