#include<stdio.h>
int main()
{
    int n,i,j,x=0,d,y;
    scanf("%d",&n);

    for(y=0;y<n;y++)
    {
        scanf("%d%d",&i,&j);
        d=j-i;
        if(d>=2)
    {
        x++;


    }


    }
    printf("%d",x);


    return 0;
}