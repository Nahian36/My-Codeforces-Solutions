#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    for (i=0;i<n;i++)
    {
        if (arr[i]=='n')
            printf("1 ");
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]=='z')
            printf("0 ");
    }
    return 0;
}