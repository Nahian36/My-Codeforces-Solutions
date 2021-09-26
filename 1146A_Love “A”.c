#include <stdio.h>
#include <string.h>
int main()
{
    int i,c=0,l;
    char arr[100];
    gets(arr);
    l=strlen(arr);
    for (i=0;i<l;i++)
    {
        if (arr[i]=='a')
            c++;
    }
    if (c>l/2)
        printf("%d", l);
    else
        printf("%d", 2*c-1);
    return 0;
}