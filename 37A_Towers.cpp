#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,flag=0,l=1,t=0,maxx=-2;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1] && i<=n-2)
            l++;
        else
        {
            if(l>maxx)
                maxx=l;
            l=1;
            t++;
        }
    }
    cout<<maxx<<" "<<t<<endl;
    return 0;
}
