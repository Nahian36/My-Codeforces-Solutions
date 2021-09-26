#include <stdio.h>
int main()
{
    int i,n,c,count=0;
    scanf("%d %d", &n, &c);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        if (arr[i+1]-arr[i]<=c)
        {
            count++;
        }
        else
            count=0;
    }
    printf("%d", count+1);
    return 0;
}