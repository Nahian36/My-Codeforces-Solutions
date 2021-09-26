#include <stdio.h>
int main()
{
    int n,i,p=0,t=0,sp=0,sl=0,r=0,m=0;
    scanf("%d", &n);
    char arr[10];
    for (i=0;i<n;i++)
    {
        scanf("%s", arr);
        if (strcmp(arr,"purple")==0)
            p++;
        else if (strcmp(arr,"green")==0)
            t++;
        else if (strcmp(arr,"blue")==0)
            sp++;
        else if (strcmp(arr,"orange")==0)
            sl++;
        else if (strcmp(arr,"red")==0)
            r++;
        else if (strcmp(arr,"yellow")==0)
            m++;
    }
    printf("%d\n", 6-n);
    if (p==0)
        printf("Power\n");
    if (t==0)
        printf("Time\n");
    if (sp==0)
        printf("Space\n");
    if (sl==0)
        printf("Soul\n");
    if (r==0)
        printf("Reality\n");
    if (m==0)
        printf("Mind\n");
    return 0;
}