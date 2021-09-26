#include<stdio.h>
int main()
{
    int n,i,j,a,b,count=0;
    long long int arr[20005],temp;
    scanf("%d%d%d", &n,&a,&b);
    for (i=0;i<n;i++)
    {
        scanf("%I64d", &arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d", arr[b]-arr[b-1]);
    return 0;
}
