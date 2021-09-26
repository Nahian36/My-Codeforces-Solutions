#include <stdio.h>
int main()
{
    int i;
    char arr1[1000],arr2[1000],arr[1000];
    gets(arr1);
    gets(arr2);

    if (strlen(arr1)==strlen(arr2))
    {
        for (i=0;i<strlen(arr1);i++)
        {
            if (arr1[i]==arr2[i])
            {
                arr[i]='0';
            }
            else
            {
                arr[i]='1';
            }
        }
    }
    for (i=0;i<strlen(arr1);i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}