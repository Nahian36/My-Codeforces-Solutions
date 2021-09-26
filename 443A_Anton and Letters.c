#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,count=0,l;
    char arr[1000];
    gets(arr);
    l=strlen(arr);
    if (arr[0]=='{' && arr[l-1]=='}')
        {
            for (i=1;i<l-4;i=i+3)
            {
                for (j=i+3;j<l-1;j=j+3)
                {
                    if (arr[i]==arr[j])
                    {
                        arr[j]='1';
                    }
                }
            }
            for (i=1;i<l-1;i=i+3)
            {
                if (arr[i]!='1')
                    {
                        count++;
                    }
            }
            printf("%d", count);
        }
        return 0;
}