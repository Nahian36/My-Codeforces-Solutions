#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,flag;
    scanf("%d", &n);
    char arr[105];
    char temp;
    for (i=0;i<n;i++)
    {
        flag=0;
        scanf("%s", arr);
        int l=strlen(arr);
        for (j=0;j<l-1;j++)
        {
            for (k=j+1;k<l;k++)
            {
                if(arr[j]>arr[k])
                {
                    temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]=temp;
                }
            }
        }

        for (j=0;j<l-1;j++)
        {
            for (k=j+1;k<l;k++)
            {
                if(arr[j]==arr[k])
                {
                    flag=1;
                    goto p;
                }
            }
        }
        for (k=0;k<l-1;k++)
        {
            if(arr[k]+1!=arr[k+1])
            {
                flag=1;
                goto p;
            }
        }
        p:
        if (flag==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
