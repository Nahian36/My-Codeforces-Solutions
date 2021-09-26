#include <stdio.h>
int main()
{
    int n,a=0,i;
    scanf("%d", &n);
    if (n%2==0)
    {
        a=n/2;
        int arr[a];
        printf("%d\n", a);
        for (i=0;i<a;i++)
        {
            printf("2 ");
        }
    }
    else
    {
        n=n-3;
        a=n/2;
        int arr[a];
        printf("%d\n", a+1);
        for (i=0;i<a;i++)
        {
            printf("2 ");
        }
        printf("3");
    }
    return 0;
}