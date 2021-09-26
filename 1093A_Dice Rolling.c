#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a);
        if (a<=7)
            printf("1\n");
        else if (a%7==0)
        {
            printf("%d\n", (a/7));
        }
        else
        {
            printf("%d\n", (a/7)+1);
        }
    }
    return 0;
}