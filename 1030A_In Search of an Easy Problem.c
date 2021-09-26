#include <stdio.h>
int main()
{
    int n,i,z,sum=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&z);
        sum=sum+z;
    }
        if(sum>0)
        {
            printf("HARD");
        }
        else
        {
            printf("EASY");
        }
    return 0;
}