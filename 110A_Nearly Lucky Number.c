#include <stdio.h>
int main()
{
    int i,count=0;
    char arr[100];
     gets (arr);
    for (i=0;i<strlen(arr);i++)
    {
        if (arr[i]=='4' || arr[i]=='7')
        {
            count++;
        }
    }
    if (count==4 || count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}