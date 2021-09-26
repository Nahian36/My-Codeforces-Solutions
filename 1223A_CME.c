#include<stdio.h>
int main()
{
    int n,i;
    long long int a;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%I64d", &a);
        if (a==2)
        {
            printf("2\n");
        }
        else
        {
            if(a%2==0)
            {
                printf("0\n");
            }
            else
            {
                printf("1\n");
            }
        }
    }
    return 0;
}