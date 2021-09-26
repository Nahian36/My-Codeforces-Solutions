#include <stdio.h>
int main()
{
    int i;
    double sum=0,n;
    scanf("%lf", &n);
    double arr[1000];
    for (i=0;i<n;i++)
    {
        scanf("%lf", &arr[i]);
        sum=sum+arr[i];
    }
    sum=sum/n;
    printf("%.12f", sum);
    return 0;
}