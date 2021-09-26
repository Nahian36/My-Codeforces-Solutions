#include <stdio.h>
int main()
{
    int count=0;
    char arr[100];
    gets(arr);
    for (int i=0;i<strlen(arr);i++)
    {
        if (arr[i]=='H' || arr[i]=='Q' || arr[i]=='9')
            count=1;
    }
    if (count==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}