#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,res=102,i,c=0;
    cin>>a>>b;
    res=a;
    while(res>=b)
    {
        res-=(b-1);
        c++;
    }
    cout<<a+c<<endl; //oh dayumn !! nije korsiiiiii
    return 0;
}
