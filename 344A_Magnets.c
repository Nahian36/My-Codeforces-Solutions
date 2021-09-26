#include <stdio.h>
int main()
{
    int n,i,a,count=1;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    a=arr[0];
    for (i=0;i<n;i++)
    {
        if (a!=arr[i])
        {
            a=arr[i];
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
 