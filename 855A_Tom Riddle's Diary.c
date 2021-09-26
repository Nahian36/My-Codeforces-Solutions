#include<stdio.h>
int main()
{
    int n,i,j,flag;
    scanf("%d", &n);
    char arr[n][1000];
    for (i=0;i<n;i++)
    {
        scanf("%s", arr[i]);
    }
    printf("NO\n");
    for (i=1;i<n;i++)
    {
        flag=0;
        for (j=0;j<i;j++)
        {
            if (strcmp(arr[i],arr[j])==0)
            {
                flag=1;
                printf("YES\n");
                break;
            }
        }
        if(flag==0)
        {
            printf("NO\n");
        }
    }
    return 0;
}
