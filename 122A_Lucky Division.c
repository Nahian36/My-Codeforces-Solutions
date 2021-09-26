#include <stdio.h>
int main()
{
    int i,flag=0, count=0;
    char arr[100];
    gets(arr);
    for (i=0;i<strlen(arr);i++)
    {
            if(arr[i]=='4' || arr[i]=='7')
            {
                count++;
            }

    }
    if(count==strlen(arr))
    {
        printf("YES");
    }
    else
    {
        int p;
        sscanf(arr,"%d", &p);
        if (p%4==0 || p%7==0 || p%47==0 || p%74==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}