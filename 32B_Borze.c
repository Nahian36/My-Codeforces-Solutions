#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char arr[205];
    scanf("%s", arr);
    l=strlen(arr);
    for (i=0;i<l;i++)
    {
        if(arr[i]=='.')
            printf("0");
        else
        {
            if(arr[i]=='-')
            {
                if(arr[i+1]=='.')
                {
                    printf("1");
                    i++;
                }
                else if(arr[i+1]=='-')
                {
                    printf("2");
                    i++;
                }
            }
        }
    }
    return 0;
}
