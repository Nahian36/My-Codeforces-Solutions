#include <stdio.h>
int main()
{
    int n,i,p;
    scanf("%d", &n);
    int arr[n], brr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &arr[i], &brr[i]);
    }
    scanf("%d", &p);
    for (i=0;i<n;i++)
    {
        if (arr[i]<=p && brr[i]>=p)
        {
            break;
        }
    }
    printf("%d", n-i);
    return 0;
}