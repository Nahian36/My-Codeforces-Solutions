#include<stdio.h>
int main()
{
    int a,b,i=0,c;
    scanf("%d%d", &a,&b);
    while(1)
    {
        i++;
        c=a*i;
        if(c%10==0 || c%10==b)
            break;
    }
    printf("%d", i);
    return 0;
}
