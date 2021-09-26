#include<bits/stdc++.h>
using namespace std;
#include <cstdlib>

int main()
{
    unsigned long long int ans,n,i,l,a,flag;
    string arr;
    cin>>n;
    while(n--)
    {
        flag=0;
        cin>>a>>arr;
        l=arr.size();
        if(l==1 && arr[0]<'9')
        {
            cout<<flag<<endl;
        }
        else
        {
            for(i=0;i<l;i++)
            {
                if(arr[i]!='9')
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                ans=(l-1)*a;
                cout<<ans<<endl;
            }
            else
            {
                ans=l*a;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
