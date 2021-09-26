#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        if (a>b+c)
        {
            printf("+");
        }
        else
            printf("?");
    }
    else if (a<b)
    {
        if (a+c<b)
            printf("-");
        else
            printf("?");
    }
    else
    {
        if (c>0)
            printf("?");
        else
            printf("0");
    }
    return 0;
}