#include <stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if ((n%2)!=0)
        printf("%d", arr[n/2]);
    else
        printf("%d", arr[(n/2)-1]);
    return 0;
}