#include <stdio.h>
int main()
{
    int i,a[3],j,temp;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for (i=0;i<2;i++)
    {
        for (j=i;j<3;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d", (a[1]-a[0])+(a[2]-a[1]));
}