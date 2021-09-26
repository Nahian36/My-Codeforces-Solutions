#include <stdio.h>
int main ()
{
    int n,i=0,count=0,c1=0,z=0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    p:
    if (arr[i]=='x')
    {
        count++;
        i++;
        if (count>2 && arr[i]!='x')
            {
                c1=count-2+c1;
            }
        if (i==n)
        {
            goto q;
        }

        else
            goto p;
    }
    else if (arr[i]!='x')
    {
        i++;
        count=0;
        if (i==n)
            goto q;
        else
            goto p;
    }
    q:
    printf("%d", c1);
    return 0;
}