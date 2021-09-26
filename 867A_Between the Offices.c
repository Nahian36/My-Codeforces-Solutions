#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, c1=0, c2=0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    for (i=0;i<n-1;i++)
    {
        if (arr[i]=='S' && arr[i+1]=='F')
            c1++;
        else if (arr[i]=='F' && arr[i+1]=='S')
            c2++;
    }
    if (c1>c2)
        printf("YES");
    else
        printf("NO");
    return 0;
}