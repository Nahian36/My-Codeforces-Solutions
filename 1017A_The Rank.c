#include <stdio.h>
int main()
{
    int n,i,a,b,c,d,j,temp,z;
    scanf("%d", &n);
    int sum[n];
    for (i=0;i<n;i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum[i]=a+b+c+d;
    }
    z=sum[0];
    for (i=0;i<n-1;i++)
    {
        for (j=i;j<n;j++)
        {
            if (sum[i]<sum[j])
            {
                temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        if (sum[i]==z)
        {
            break;
        }
    }
    printf("%d", i+1);
    return 0;
}