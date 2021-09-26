#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,array[5][5],p,q,s;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (array[i][j]==1)
            {
                goto y;
            }
        }
    }
    y:
    i++;
    j++;
if (i>=3)
    p=i-3;
else p=3-i;
if (j>=3)
    q=j-3;
else q=3-j;

    s=p+q;
    printf("%d", s);

    return 0;
}