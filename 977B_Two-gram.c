#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,l,c1=0,max=0;
    char arr[105],t1,t2;
    scanf("%d", &n);
    scanf("%s", arr);
    l=strlen(arr);
    for (i=0;i<l;i++)
    {
        c1=0;
        t1=arr[i];
        t2=arr[i+1];
        for (j=0;j<l;j++)
        {
            if(arr[j]==t1 && arr[j+1]==t2)
            {
                c1++;
            }
        }
        if(c1>max)
        {
            max=c1;
        }
    }
    for (i=0;i<l;i++)
    {
        c1=0;
        t1=arr[i];
        t2=arr[i+1];
        for (j=0;j<l;j++)
        {
            if(arr[j]==t1 && arr[j+1]==t2)
            {
                c1++;
            }
        }
        if(c1==max)
        {
            break;
        }
    }
    printf("%c%c", t1, t2);
    return 0;
}
