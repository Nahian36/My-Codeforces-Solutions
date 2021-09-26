#include <stdio.h>
int main()
{
    int m,n,q;
    scanf("%d%d",&m,&n);
    if(m>=1 && m<=16 && n>=1 && n<=16)
    {
    q=(m*n)/2;
    printf("%d",q);
    }
    return 0;
}