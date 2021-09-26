#include<stdio.h>
int main()
{
    int n,s,sum=0,i,j,temp;
    scanf("%d %d", &n,&s);
    int arr[102];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
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
    for (i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    if (sum-arr[n-1]<=s)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}