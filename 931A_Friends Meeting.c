#include<stdio.h>
int main()
{
    int a,b,d,count1=0,count2=0,av,i=1,temp;
    scanf("%d%d", &a, &b);
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    av=(a+b)/2;
    while(a!=av)
    {
        a++;
        count1=count1+i;
        i++;
    }
    i=1;
    while(b!=av)
    {
        b--;
        count1=count1+i;
        i++;
    }
    printf("%d", count1+count2);
    return 0;
}