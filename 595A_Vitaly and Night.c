#include <stdio.h>
int main()
{
    int n,m,i,j,count=0;
    scanf("%d %d", &n, &m);
    int arr[n][2*m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<(2*m);j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<(2*m);j=j+2)
        {
            if (arr[i][j]!=0 || arr[i][j+1]!=0)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}