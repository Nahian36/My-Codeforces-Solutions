#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0;i<n;i++)
    {
        if (arr[i]>0)
        {
            if(360%(180-arr[i])==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}