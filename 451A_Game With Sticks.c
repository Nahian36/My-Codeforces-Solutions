#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    if ((n<=m) && (n%2==0))
    {
        printf("Malvika");
    }
    else if ((m<n) && (m%2==0))
    {
        printf("Malvika");
    }
    else
    {
        printf("Akshat");
    }
    return 0;
}