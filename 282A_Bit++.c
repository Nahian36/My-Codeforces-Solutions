#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,X=0;
    scanf("%d\n",&n);
    char ch[150];
    for (i=0;i<n;i++)
    {
        gets(ch);
        if ((ch[0]=='+' && ch[1]=='+') || (ch[1]=='+' && ch[2]=='+') )
        {
            X=X+1;
        }
        if ((ch[0]=='-' && ch[1]=='-') || (ch[1]=='-' && ch[2]=='-') )
        {
            X=X-1;
        }
    }
    printf("%d", X);
    return 0;
}