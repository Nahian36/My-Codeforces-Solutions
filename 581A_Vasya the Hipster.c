#include <stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        printf("%d ", b);
        x=a-b;
    }
    else
    {
        printf("%d ", a);
        x=b-a;
    }
    printf("%d", x/2);
    return 0;
}