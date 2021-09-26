#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,c1=0,c2=0,l;
    char arr[100],brr[100];
    scanf("%d", &n);
    scanf("%s", arr);
    for (i=0;i<n;i++)
    {
        scanf("%s", brr);
        int l=strlen(brr);
        for (j=0;j<3;j++)
        {
            if(arr[j]==brr[j])
                c1++;
        }
        for (j=0,k=l-3;j<3;j++,k++)
        {
            if(arr[j]==brr[k])
                c2++;
        }
    }
    if(c1==c2)
        printf("home");
    else
        printf("contest");
    return 0;
}
