#include <stdio.h>
int main()
{
    int i,n,count=0, max=0;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        if (arr[i]<=arr[i+1])
        {
            count++;
            if (count>max)
            {
                max=count;
            }
        }
        else
        {
        count=0;
        }
    }
    printf("%d", max+1);
    return 0;
}