#include <stdio.h>
int main()
{
    int n, a, b, i,j, count=0,temp,arr[1000];
    scanf("%d", &n);
    scanf("%d", &a);
    for (i=0;i<a;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    for (i=a;i<b+a;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<b+a-1;i++)
    {
        for (j=i;j<b+a;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<b+a;i++)
    {
        if (arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    if (count==n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}
 