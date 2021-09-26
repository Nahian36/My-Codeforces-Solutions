#include <stdio.h>
int main()
{
    int n,k,i,sum=0;
    scanf("%d %d", &n, &k);
    int arr[1000];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]>k)
        {
            sum=sum+2;
        }
        else
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}