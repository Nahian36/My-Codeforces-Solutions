#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n],brr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        brr[arr[i]]=i+1;
    }
    for (i=1;i<=n;i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}