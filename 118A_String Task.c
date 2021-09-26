#include <stdio.h>
int main()
{
    int i;
    char arr[100];
    gets(arr);
    strlwr(arr);
    for (i=0;i<strlen(arr);i++)
    {
        if (arr[i]=='a' || arr[i]=='o' || arr[i]=='y' || arr[i]=='e' || arr[i]=='u' || arr[i]=='i')
            arr[i]=8;
        else
        {
            printf(".%c", arr[i]);
        }
    }
    return 0;
}