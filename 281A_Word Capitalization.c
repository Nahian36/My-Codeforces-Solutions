#include<stdio.h>
#include<string.h>
int main()
{int i,c;
    char ch[1000],b;
    gets(ch);
    c=strlen(ch);
if(ch[0]>='a'&&ch[0]<='z')
{b=ch[0]-32;printf("%c",b);}
else printf("%c",ch[0]);
for(i=1;i<c;i++)

{
    printf("%c",ch[i]);
}


    return 0;
}