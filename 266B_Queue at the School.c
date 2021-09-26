#include <stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d %d", &n, &t);
    char arr[n],temp;
    getchar();
    for (i=0;i<n;i++)
    {
        scanf("%c", &arr[i]);
    }
    for (i=0;i<t;i++)
    {
        for (j=0;j<n;j++)
        {
            if (arr[j]=='B' && arr[j+1]=='G')
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                j++;
            }
        }

    }
    for (i=0;i<n;i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
 