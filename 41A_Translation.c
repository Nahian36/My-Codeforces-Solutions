#include <stdio.h>
int main()
{
    int i,count=0;
    char arr1[1000];
    gets (arr1);
    char arr2[1000];
    gets (arr2);
    if (strlen(arr1)==strlen(arr2))
    {
        for (i=0;i<strlen(arr1);i++)
        {
            if (arr1[i]==arr2[strlen(arr2)-i-1])
            {
                count++;
            }
        }
        if (count==strlen(arr1))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}