#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,sum=0;
    char arr[100];
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%s", arr);
        if (strcmp(arr,"Tetrahedron")==0)
            sum=sum+4;
        else if (strcmp(arr,"Cube")==0)
            sum=sum+6;
        else if (strcmp(arr,"Octahedron")==0)
            sum=sum+8;
        else if (strcmp(arr,"Dodecahedron")==0)
            sum=sum+12;
        else if (strcmp(arr,"Icosahedron")==0)
            sum=sum+20;
    }
    printf("%d", sum);
    return 0;
}