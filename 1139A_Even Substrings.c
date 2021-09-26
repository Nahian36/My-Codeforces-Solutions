#include <stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    for (i=0,j=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            while (j!=i)
            {
                count++;
                j++;
            }
            count++;
            j=0;
        }
    }
    printf("%d", count);
    return 0;
}