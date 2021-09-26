#include <stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    for (i=0,j=1;i<n;j++)
    {
        printf("%c", arr[i]);
        i=i+j;
    }
    return 0;
}