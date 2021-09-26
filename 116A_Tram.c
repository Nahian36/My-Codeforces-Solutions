#include <stdio.h>
int main()
{
    int n,i,x,rem=0,max=0;
    int a[10000],b[10000];
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    x=a[0];
    for (i=0;i<n;i++)
    {
            rem=b[i]-a[i]+x;
            x=rem;
            if (x>max)
            {
                max=x;
            }

    }
    printf("%d", max);
    return 0;
}