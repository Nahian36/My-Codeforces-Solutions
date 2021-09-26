#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int i,countt=0,sum=0,arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        {
            countt++;
            if(countt==arr[i])
            {
                countt=0;
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
