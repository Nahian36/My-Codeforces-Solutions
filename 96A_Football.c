#include <stdio.h>
int main()
{
    int count=0,idx;
    char arr[100];
    gets(arr);
    idx=arr[0];
     for (int i=0;i<strlen(arr)-1;i++)
     {
         if (idx==arr[i+1])
         {
             count++;
             if (count+1>=7)
                break;
         }
         else
         {
             idx=arr[i+1];
             count=0;

         }
     }
     if(count+1>=7)
        {
            printf("YES");
        }
     else
     {
         printf("NO");
     }
    return 0;
}