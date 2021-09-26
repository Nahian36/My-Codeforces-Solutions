#include <stdio.h>
int main()
{
    int n,i,j,k,x,z,y=0;
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        scanf("%d%d%d",&i,&j,&k);
        z=i+j+k;
        if(z>=2)
        {
            y++;
        }
    }
    printf("%d",y);
    return 0;
}