#include <stdio.h>
int main()
{
    int i,s;
    char arr1[100];
    char arr2[100];
    gets(arr1);
    gets(arr2);
    strlwr(arr1);
    strlwr(arr2);
        s=strcmp(arr1,arr2);
            printf("%d", s);


    return 0;
}