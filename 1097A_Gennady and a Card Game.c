#include <stdio.h>
int main()
{
    char a1[3],a2[3],a3[3],a4[3],a5[3],a6[3];
    scanf("%s %s %s %s %s %s", a1, a2, a3, a4, a5, a6);
    if (a1[0]==a2[0] || a1[0]==a3[0] || a1[0]==a4[0] || a1[0]==a5[0] || a1[0]==a6[0] || a1[1]==a2[1] || a1[1]==a3[1] || a1[1]==a4[1] || a1[1]==a5[1] || a1[1]==a6[1])
        printf("YES");
    else
        printf("NO");
    return 0;
}