#include <stdio.h>
int main()
{
    int i,j,count=0;
    int arr[4];
    for (i=0;i<4;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<3;i++)
    {
        for (j=i+1;j<4;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]='1';
            }
        }
    }
    for (i=0;i<4;i++)
    {
        if (arr[i]!='1')
        {
            count++;
        }
    }
    printf("%d", 4-count);
    return 0;
}