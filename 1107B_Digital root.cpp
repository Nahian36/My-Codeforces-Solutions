#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,ans;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        ans=((a-1)*9)+b;
        cout<<ans<<endl;
    }
    return 0;
}
