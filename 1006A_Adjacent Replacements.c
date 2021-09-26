#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2!=0)
        {
            arr[i]=arr[i]+1;
            i--;
        }
        else
            arr[i]=arr[i]-1;
    }
    for (i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}