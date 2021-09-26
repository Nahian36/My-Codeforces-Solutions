#include <stdio.h>
int main()
{
    int n,i,j,sum1=0,sum2=0,sum3=0,sum4=0;
    scanf("%d", &n);
    int arr[200][200];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i=0,j=0;i<n,j<n;i++,j++)
    {
        sum1=sum1+arr[i][j];
    }
    for (i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if (i!=j)
        sum2=sum2+arr[i][j];
    }
    for (i=0,j=(n/2);i<n;i++)
    {
        if (i!=j)
        {
            sum3=sum3+arr[i][j];
        }
    }
    for (j=0,i=(n/2);j<n;j++)
    {
        if (i!=j)
        {
            sum4=sum4+arr[i][j];
        }
    }
    printf("%d", sum1+sum2+sum3+sum4);
    return 0;
}