#include <stdio.h>
int main()
{
    int i,n,x,y,c1=0,c2=0;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &x, &y);
        if (x>y)
            c1++;
        else if (y>x)
            c2++;
    }
    if (c1>c2)
        printf("Mishka");
    else if (c2>c1)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
    return 0;
}