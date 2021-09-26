#include <stdio.h>
int main()
{
    int n,i,j,temp,sum=0;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<n;i=i+2)
    {
        sum=sum+arr[i+1]-arr[i];
    }
    printf("%d", sum);
    return 0;
}