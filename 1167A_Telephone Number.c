#include <stdio.h>
int main()
{
    int n,i,j,s,t;
    scanf("%d", &n);
    char brr[5];
    for (i=0;i<n;i++)
    {
        int count=0,flag=0;
        scanf("%d", &s);
        char arr[s];
        scanf("%s", arr);
        for (j=0;j<s;j++)
        {
            if (arr[j]=='8')
            {
                t=s-j;
                if (t>=11)
                {
                    flag=1;
                    break;
                }
                else
                    {
                        flag=0;
                        break;
                    }
            }
            else
                flag=0;
        }
        if (flag==0)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}