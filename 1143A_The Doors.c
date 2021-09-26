#include <stdio.h>
int main()
{
    int n,i,c1=0,c2=0;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=n-1;i>=0;i--)
    {
        if (arr[i]==1)
        {
            c1=i+1;
            break;
        }
    }
    for (i=n-1;i>=0;i--)
    {
        if (arr[i]==0)
        {
            c2=i+1;
            break;
        }
    }
    if (c1>c2)
        printf("%d", c2);
    else
        printf("%d", c1);
    return 0;
}