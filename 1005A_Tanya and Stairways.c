#include <stdio.h>
int main()
{
    int n,i,j,k,c1=0,c2=0;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]==1)
            c1++;
    }
    int brr[c1];
    for (i=0,k=0;i<n;i++)
    {
        if (arr[i]==1)
        {
            j=i;
            while (arr[j+1]!=1 && j<n-1)
            {
                c2++;
                j++;
            }
            brr[k]=c2+1;
            c2=0;
            k++;
        }
    }
    printf("%d\n", c1);
    for (i=0;i<c1;i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}