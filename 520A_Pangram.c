#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d", &n);
    char arr[105];
    scanf("%s", arr);
    strlwr(arr);
    char temp,c;
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    c=arr[0];
    for (i=0;i<n;i++)
    {
        if(c!=arr[i+1])
        {
            count++;
            c=arr[i+1];
        }
    }
    if (count!=26)
        printf("NO");
    else
        printf("YES");
    return 0;
}
