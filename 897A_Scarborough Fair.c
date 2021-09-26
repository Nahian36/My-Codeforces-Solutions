#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d", &n, &m);
    char arr[n];
    scanf("%s", arr);
    for (i=0;i<m;i++)
    {
        int l,r,j;
        char c1,c2;
        scanf("%d %d %c %c", &l, &r, &c1, &c2);
        for (j=l;j<=r;j++)
        {
            if (arr[j-1]==c1)
            {
                arr[j-1]=c2;
            }
        }
        j=0;
    }
    printf("%s", arr);
    return 0;
}