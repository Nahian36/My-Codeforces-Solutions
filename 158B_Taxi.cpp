#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j=0,c1=0,c2=0,c3=0,c4=0,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        switch(arr[i])
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        }
    }
    c+=c4+c3;
    if(c3<=c1)
        c1-=c3;
    else
       c1=0;
    if(c2>c1)
    {
        c+=(c1+1)/2;
        c2-=(c1+1)/2;
        c1=0;
        c+=(c2+1)/2;
        c2=0;
    }
    else if(c2==c1)
    {
        c+=c2;
        c1=0;
        c2=0;
    }
    else
    {
        if(c1>=2*c2)
        {
            c1-=2*c2;
            c+=c2;
            c2=0;
        }
        else
        {
            c2-=(c1+1)/2;
            c+=(c1+1)/2;
            c1=0;
        }
    }
    if(c1>0)
    {
        if(c1%4==0)
            c+=c1/4;
        else
            c+=(c1/4)+1;
    }
    if(c2>0)
    {
        c+=(c2+1)/2;
    }
    cout<<c<<endl;
    return 0;
}
