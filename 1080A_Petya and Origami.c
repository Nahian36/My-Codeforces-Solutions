#include <stdio.h>
int main()
{
    int n,k,i,r,g,b,count=0;
    scanf("%d %d", &n, &k);
    r=2*n;
    g=5*n;
    b=8*n;
    if (r%k==0)
        count=r/k;
    else
        count=(r/k)+1;
    if (g%k==0)
        count=(g/k)+count;
    else
        count=(g/k)+1+count;
    if (b%k==0)
        count=(b/k)+count;
    else
        count=(b/k)+1+count;
    printf("%d", count);
    return 0;
}