#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    char arr[n+4][10];
    for (i=0;i<n;i++)
    {
        for (j=0;j<=5;j++)
        {
            scanf("%c", &arr[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
            if (arr[i][1]=='O' && arr[i][2]=='O')
            {
                printf("YES\n");
                arr[i][1]=43;
                arr[i][2]=43;
                break;
            }
            else if (arr[i][4]=='O' && arr[i][5]=='O')
            {
                printf("YES\n");
                arr[i][4]=43;
                arr[i][5]=43;
                break;
            }
            if (i==n-1)
                goto q;
    }
    for (i=0;i<n;i++)
    {
        for (j=1;j<=5;j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
        if (i==n-1)
            goto s;
    }
    q:
        printf("NO");
    s:
    return 0;
}