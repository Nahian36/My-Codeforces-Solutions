#include<stdio.h>
int main()
{
    int h,l,i,j;
    scanf("%d%d", &h, &l);
    for (i=0;i<h;i++)
    {
        if(i%2==0)
        {
            for (j=0;j<l;j++)
            {
                    printf("#");
            }
            printf("\n");
        }
        else if(i%4==1)
        {
            for (j=0;j<l-1;j++)
            {
                printf(".");
            }
            printf("#\n");
        }
        else if (i%4==3)
        {
            printf("#");
            for (j=0;j<l-1;j++)
            {
                printf(".");
            }
            printf("\n");
        }
    }
    return 0;
}
