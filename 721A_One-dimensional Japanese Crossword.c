#include <stdio.h>
int main()
{
    int n,i,j,c1=0,c2=0,brr[1000];
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    for (i=0;i<n;i++)
    {
        if (arr[i]=='B' && (arr[i+1]=='W' || arr[i+1]==NULL))
        {
            c1++;
        }
    }
    for (i=0,j=0;i<n;i++)
    {
        if (arr[i]=='B')
        {
            c2++;
            brr[j]=c2;
            j++;
            if (arr[i+1]=='B')
                j--;
        }
        else
        {
            c2=0;
        }
    }
    printf("%d\n", c1);
    if (c1!=0)
    {
        for (i=0;i<c1;i++)
        {
            printf("%d ", brr[i]);
        }
    }
    return 0;
}
 