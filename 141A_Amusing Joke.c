#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[100];
    char arr2[100];
    char arr3[100];
    int i,j,x,y,z,c=0,a=0,b=0;
    gets(arr1);
    gets(arr2);
    gets(arr3);

    x=strlen(arr1);
    y=strlen(arr2);
    z=strlen(arr3);
    if ((x+y)!=z)
    {
        printf("NO");
    }
    else
    {
        for (i=0;i<x;i++)
        {
            for (j=0;j<z;j++)
            {
                if (arr1[i]==arr3[j])
                {
                    arr3[j]='1';
                    arr1[i]='2';
                }
            }
        }
        for (i=0;i<y;i++)
        {
            for (j=0;j<z;j++)
            {
                if (arr2[i]==arr3[j])
                {
                    arr3[j]='1';
                    arr2[i]='2';
                }
            }
        }
        for (i=0;i<z;i++)
        {
            if (arr3[i]=='1')
            {
                c++;
            }
        }
        for (i=0;i<x;i++)
        {
            if (arr1[i]=='2')
            {
                a++;
            }
        }
        for (i=0;i<y;i++)
        {
            if (arr2[i]=='2')
            {
                b++;
            }
        }
        if ((a+b)==(x+y))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
 