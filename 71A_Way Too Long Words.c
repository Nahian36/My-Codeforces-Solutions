#include<stdio.h>
#include<string.h>
int main()
{int a,s,i,j,b;char ch[100];
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        gets(ch);
        s=strlen(ch);
        if(s>10)
            {printf("%c",ch[0]);
                for(j=0;j<s;j++)
                {
            b=s-2;}printf("%d",b);
            printf("%c",ch[s-1]);}
            else puts(ch);
    printf("\n");}
    return 0;
}