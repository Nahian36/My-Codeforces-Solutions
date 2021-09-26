#include <stdio.h>
int main()
{
    int count=0,x;
    char arr[100];
    gets(arr);
     for (int i=0;i<strlen(arr);i++)
     {
         if (arr[i]>=65 && arr[i]<=90)
         {
             count++;
         }
     }
     x=strlen(arr)/2;
     if (count<=x)
     {
         strlwr(arr);
     }
     else
     {
         strupr(arr);
     }
     puts(arr);
     return 0;
}