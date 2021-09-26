#include <stdio.h>
#include <string.h>
int main()
{
    int arr[4],i,l,count=0;
    char brr[100000];
    for (i=0;i<4;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%s", brr);
    l=strlen(brr);
    for (i=0;i<l;i++)
    {
        count=count+arr[brr[i]-49];
    }
    printf("%d", count);
    return 0;
}