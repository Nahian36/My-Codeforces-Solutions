#include <stdio.h>
#include <string.h>
int main()
{
    int i,l,count=1;
    char arr[1000];
    gets(arr);
    l=strlen(arr);
    for (i=0;i<l;i++)
    {
        if (arr[i]=='W' && arr[i+1]=='U' && arr[i+2]=='B')
        {
            i=i+2;
            if (!count)
                printf(" ");
        }
            else
                {
                    printf("%c", arr[i]);
                    count=0;
                }

    }
    return 0;
}