#include<stdio.h>
int main()
{
    int arr[4],i,max=0;
    for (i=0;i<4;i++)
    {
        scanf("%d", &arr[i]);
        if (max<arr[i])
            max=arr[i];
    }
    for (i=0;i<4;i++)
    {
        arr[i]=max-arr[i];
        if (arr[i]!=0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}