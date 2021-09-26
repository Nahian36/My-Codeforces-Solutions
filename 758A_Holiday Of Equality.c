#include <stdio.h>
int main()
{
    int i,n,sum=0,max=0;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>max)
            max=arr[i];
    }
    for (i=0;i<n;i++)
    {
        sum=sum+max-arr[i];
    }
    printf("%d", sum);
    return 0;
}