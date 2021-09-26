#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[31],brr[31],x,y,count=0,i,j;
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &arr[i],& brr[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (arr[i]==brr[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}