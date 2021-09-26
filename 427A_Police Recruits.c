#include<stdio.h>
int main()
{
    int n,a,i,j,count=0,count1=0,count2;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a);
        if (a!=-1)
            count1=count1+a;
        else
        {
            if(count1>0)
            {
                count1--;
            }
            else
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
