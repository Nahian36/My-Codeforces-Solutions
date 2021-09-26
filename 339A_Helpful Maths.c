#include <stdio.h>
int main()
{
    int i,j,c,temp,idx,min;
    char arr[100];
    gets(arr);
    c=strlen(arr);
    if(c%2!=0)
    {
    for (i=0;i<strlen(arr);i=i+2)
    {
        min=1000;
        for (j=i;j<strlen(arr);j=j+2)
        {
            if (min>arr[j])
        {
            min=arr[j];
            idx=j;
        }
        }
        temp=arr[i];
        arr[i]=arr[idx];
        arr[idx]=temp;
    }
    }
    puts(arr);
    return 0;
}