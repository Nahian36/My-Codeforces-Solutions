#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char arr[105];
    gets(arr);
    int l1=strlen(arr),l2=0;
    for (i=0;i<l1;i++)
    {
        for (j=i+1;j<l1;j++)
        {
            if (arr[i]==arr[j])
            {
                arr[j]='1';
            }
        }
    }
    for (i=0;i<l1;i++)
    {
        if(arr[i]!='1')
        {
            l2++;
        }
    }
    if (l2%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}