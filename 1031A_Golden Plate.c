#include <stdio.h>
int main()
{
    int a,b,c,i,sum=0;
    scanf("%d %d %d", &a, &b, &c);
    for (i=0;i<c;i++)
    {
        sum=(2*a)+(2*(b-2))+sum;
        a=a-4;
        b=b-4;
    }
    printf("%d", sum);
    return 0;
}