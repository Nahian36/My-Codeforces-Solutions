#include <stdio.h>
int main()
{
    int i;
    long long int arr,brr,crr,sum[10000000],n;
    scanf("%I64d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%I64d %I64d %I64d", &arr,&brr,&crr);
        sum[i]=(arr+brr+crr)/2;
    }
    for (i=0;i<n;i++)
    {
        printf("%I64d\n", sum[i]);
    }
    return 0;
}