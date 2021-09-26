#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,res;
    cin>>n;
    while(n--)
    {
        res=0;
        cin>>a;
        while(a>=10)
        {
            c=a/10;
            b=c*10;
            a=(a-b)+c;
            res=res+b;
        }
        cout<<res+a<<endl;
    }
    return 0;
}
