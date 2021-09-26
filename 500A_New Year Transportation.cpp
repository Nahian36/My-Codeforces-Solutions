#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i=1,flag=0;
    cin>>n>>m;
    if(m==1)
        cout<<"YES"<<endl;
    else
    {
        int arr[40000];
        for(i=1;i<n;i++)
        {
            cin>>arr[i];
        }
        i=1;
        while(i<n)
        {
            if(arr[i]+i==m)
            {
                flag=1;
                break;
            }
            i+=arr[i];
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
