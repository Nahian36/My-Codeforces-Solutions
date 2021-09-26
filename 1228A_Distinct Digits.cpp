#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0,i,j,x,y;
    string a;
    cin>>x>>y;
    if(x<10)
    {
        cout<<x;
        return 0;
    }
    q:
    stringstream s;
    s<<x;
    s>>a;
    for (i=0;i<a.size()-1;i++)
    {
        for(j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
            {
                s<<a;
                s>>x;
                x++;
                flag=0;
                if(x>y)
                {
                    goto p;
                }
                else
                {
                    goto q;
                }
            }
            else
            {
                flag=1;
            }
        }
    }
    p:
    if(flag==0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<x;
    }
    return 0;
}
