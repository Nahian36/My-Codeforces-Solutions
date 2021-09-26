#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count=0,arr[105],temp;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]==0)
                continue;
            else if((arr[j]%arr[i]==0) && (arr[j]>0) &&(arr[i]>0))
            {
                arr[j]=0;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]!=0)
            count++;
    }
    printf("%d", count);
    return 0;
}
