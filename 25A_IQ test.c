#include <stdio.h>
int main()
{
    int i,n,arr[100],odd=0,even=0,o,e;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0;i<n;i++)
    {
        if ((arr[0]%2==0) && (arr[1]%2!=0) && (arr[2]%2!=0))
        {
            printf("1");
            break;
        }

        else if ((arr[0]%2!=0) && (arr[1]%2!=0) && (arr[2]%2==0))
        {
            printf("3");
            break;
        }

        else if ((arr[0]%2!=0) && (arr[1]%2==0) && (arr[2]%2==0))
        {
            printf("1");
            break;
        }

        else if ((arr[i]%2==0) && (arr[i+1]%2!=0) && (arr[i+2]%2==0))
          {
              printf("%d", i+2);
              break;
          }

        else if ((arr[i]%2!=0) && (arr[i+1]%2==0) && (arr[i+2]%2!=0))
           {
                printf("%d", i+2);
                break;
           }
    }
    return 0;
}