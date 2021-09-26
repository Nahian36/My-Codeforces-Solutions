#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum1,sum2;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum1=(a*b)+(2*d);
    sum2=(a*c)+(2*e);
    if (sum1<sum2)
        printf("First");
    else if (sum1>sum2)
        printf("Second");
    else
        printf("Friendship");
    return 0;
}