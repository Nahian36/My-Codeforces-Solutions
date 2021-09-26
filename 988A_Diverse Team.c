#include <stdio.h>
int main()
{
    int i,j,m,n,count=0;
    scanf("%d %d", &m, &n);
    int arr[m],brr[n];
    for (i=0;i<m;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<m-1;i++)
    {
        for (j=i+1;j<m;j++)
        {
            if (arr[i]==arr[j])
            {
                arr[j]=0;
            }
        }
    }
    for (i=0,j=0;i<m;i++)
    {
        if (arr[i]!=0)
        {
            count++;
            brr[j]=i+1;
            j++;
        }
    }
    if (count>=n)
    {
        printf("YES\n");
        for (i=0;i<n;i++)
        {
            printf("%d ", brr[i]);
        }
    }
    else
    {
        printf("NO");
    }
     return 0;
}