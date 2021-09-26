#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,minn,c;
    cin>>m;
    while(m--)
    {
        c=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        minn=arr[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]<=minn)
                minn=arr[i];
            else
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
