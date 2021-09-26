#include <stdio.h>
int main()
{
    int n,i,anton=0,danik=0;
    scanf("%d", &n);
    char name;
    getchar();
    for (i=0;i<n;i++)
    {
        scanf("%c", &name);
        if (name=='A')
            anton++;
        else if (name=='D')
            danik++;
    }
    if (anton>danik)
        printf("Anton");
    else if (danik>anton)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}
 