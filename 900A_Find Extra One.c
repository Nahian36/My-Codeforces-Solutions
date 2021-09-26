#include<stdio.h>
int main()
{
    long long int n,i,arr[100000],brr[100000];
    int c1=0,c2=0;
    scanf("%I64d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%I64d%I64d", &arr[i], &brr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            c1++;
        }
        if(c1>1)
            break;
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            c2++;
        }
        if(c2>1)
            break;
    }
    if(c1>1 && c2>1)
        printf("NO");
    else
        printf("YES");
    return 0;
}
