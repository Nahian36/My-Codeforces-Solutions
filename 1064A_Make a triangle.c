#include <stdio.h>
int main()
{
    int i,j,arr[3],temp;
    for (i=0;i<3;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<2;i++)
    {
        for (j=i;j<3;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if (arr[0]+arr[1]>arr[2])
        printf("0");
    else
        printf("%d", arr[2]-arr[1]-arr[0]+1);
    return 0;
}