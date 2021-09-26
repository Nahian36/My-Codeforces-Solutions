#include<stdio.h>
int main()
{
    int n,i,count1=0,count2=0,b=0,c=0;
    scanf("%d", &n);
    int arr[n],brr[n],crr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d%d%d", &arr[i], &brr[i], &crr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count1++;
            b=b+brr[i];
        }
        else
        {
            count2++;
            c=c+brr[i];
        }
    }
    if(5*count1<=b)
        printf("LIVE\n");
    else
        printf("DEAD\n");
    if(5*count2<=c)
        printf("LIVE\n");
    else
        printf("DEAD\n");
    return 0;
}
