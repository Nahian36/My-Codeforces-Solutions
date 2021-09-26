#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c,minn=102,maxx=-2,a,b;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxx)
        {
            maxx=arr[i];
            b=i;
        }
        if(arr[i]<=minn)
        {
            minn=arr[i];
            a=i;
        }
    }
    if(b>a)
        cout<<b+n-2-a<<endl;
    else
        cout<<b+n-1-a<<endl;
    return 0;
}
