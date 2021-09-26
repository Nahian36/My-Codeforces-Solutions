#include <stdio.h>
int main()
{
    int powK, n, powD[10000], bonus[10000], i, flag,temp1,temp2;
    scanf("%d %d", &powK, &n);
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &powD[i], &bonus[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (int j=i;j<n;j++)
        {
            if (powD[i]>powD[j])
            {
                temp1=powD[i];
                powD[i]=powD[j];
                powD[j]=temp1;
                temp2=bonus[i];
                bonus[i]=bonus[j];
                bonus[j]=temp2;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        if (powK>powD[i])
        {
            powK=powK+bonus[i];
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if (flag==0) printf("NO");
    else if (flag==1) printf("YES");
    return 0;
}