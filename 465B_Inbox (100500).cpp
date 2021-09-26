#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,z=0,c=0,of=10000,ol=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            if(of==10000)
                of=i;
            ol=i;
        }
    }
    for(i=of;i<=ol;i++)
    {
        c++;
        if(arr[i]==0)
            z++;
        else
        {
            z=0;
        }
        if(z>1)
            c--;
    }
    cout<<c<<endl;
    return 0;
}
