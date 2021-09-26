
#include<stdio.h>

int main()
 {
   int a,b,c,i,j,k,l,m,n,z;
   scanf("%d\n%d\n%d", &a, &b, &c);
   if (a>=1 && a<=10 && b>=1 && b<=10 && c>=1 && c<=10)
   {

   i=a+b+c;
   j=a*b*c;
   k=a+b*c;
   l=a*b+c;
   m=a*(b+c);
   n=(a+b)*c;
   if(i>j)
    {
        z=i;
    }
    else
    {
        z=j;
    }
    if(k>z)
    {
        z=k;
    }
    if(l>z)
    {
        z=l;
    }
    if(m>z)
    {
        z=m;
    }
    if(n>z)
    {
        z=n;
    }
    printf("%d", z);
   }
    return 0;
 }