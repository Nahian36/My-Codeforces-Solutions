#include <stdio.h>
int main()
{
    int n,m,i,sum1=0,sum2=0,z=0;
    scanf("%d %d", &n, &m);
    int arr[n],brr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        scanf("%d", &brr[i]);
    }
    for (i=0;i<n;i++)
    {
        z=brr[i]+z;
        if ((m*z)<=arr[i])
            sum1=sum1+arr[i]-(m*z);
        else
            sum1=sum1+0;
    }
    z=0;
    for (i=n-1;i>=0;i--)
    {
        z=brr[i]+z;
        if ((m*z)<=arr[i])
            sum2=sum2+arr[i]-(m*z);
        else
            sum2=sum2+0;
    }
    if (sum1>sum2)
        printf("Limak");
    else if (sum2>sum1)
        printf("Radewoosh");
    else
        printf("Tie");
    return 0;
}