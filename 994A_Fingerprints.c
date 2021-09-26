#include <stdio.h>
int main()
{
    int a,b,i,j,k=0,count=0;
    scanf("%d %d", &a, &b);
    int arr[a], brr[b],crr[a];
    for (i=0;i<a;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<b;i++)
    {
        scanf("%d", &brr[i]);
    }
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            if (arr[i]==brr[j])
            {
                count++;
                crr[k]=arr[i];
                k++;
            }
        }
    }
    if (count>0)
    {
        for (i=0;i<count;i++)
        {
            printf("%d ", crr[i]);
        }
    }
    else
        printf("");
    return 0;
}