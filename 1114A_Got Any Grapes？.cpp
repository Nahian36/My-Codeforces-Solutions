#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,a,b,c,p;
    cin>>x>>y>>z>>a>>b>>c;
    if(a>=x)
    {
        if((a-x+b)>=y)
        {
            if((a-x+c+b-y)>=z)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
