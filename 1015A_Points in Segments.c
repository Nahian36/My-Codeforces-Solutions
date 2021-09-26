#include<stdio.h>
int main()
{
    int n,u,arr[105],brr[105],i,j,k=0,count=0,flag;
    scanf("%d%d", &n,&u);
    int crr[u];
    for (i=0;i<n;i++)
    {
        scanf("%d%d", &arr[i],&brr[i]);
    }
    for (i=1;i<=u;i++)
    {
        flag=0;
        for (j=0;j<n;j++)
        {
            if (i>=arr[j] && i<=brr[j])
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            crr[k]=i;
            count++;
            k++;
        }
    }
    printf("%d\n", count);
    for (i=0;i<count;i++)
    {
        printf("%d ", crr[i]);
    }
    return 0;
}