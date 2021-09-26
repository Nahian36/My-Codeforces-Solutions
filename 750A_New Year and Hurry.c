#include<stdio.h>
int main()
{
    int n,t,l,i,count=0;
    scanf("%d%d", &n, &t);
    l=240-t;
    i=0;
    while(l>=0)
    {
        i++;
        l=l-(5*i);
        if(i==n+1)
            break;
    }
    printf("%d", i-1);
    return 0;
}
