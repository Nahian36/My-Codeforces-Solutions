#include<stdio.h>
#include <string.h>
int main()
{
    char arr1[100],arr2[100],brr1[100],brr2[100];
    int n,i;
    scanf("%s%s", arr1, arr2);
    scanf("%d", &n);
    printf("%s %s\n", arr1,arr2);
    for (i=0;i<n;i++)
    {
        scanf("%s%s", brr1, brr2);
        if(strcmp(arr1,brr1)==0)
        {
            strcpy(arr1,brr2);
        }
        else
        {
            strcpy(arr2,brr2);
        }
        printf("%s %s\n", arr1, arr2);
    }
    return 0;
}
