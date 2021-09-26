#include <stdio.h>
int main()
{
    int n,i,sumx=0,sumy=0,sumz=0;
    scanf("%d", &n);
    int x[100],y[100],z[100],sum[100];
    for (i=0;i<n;i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);

        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumz=sumz+z[i];
    }
    if (sumx==0 && sumy==0 && sumz==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}