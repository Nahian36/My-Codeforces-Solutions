#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,maxx=-2,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            c++;
        else
        {
            if(c>maxx)
                maxx=c;
            c=0;
        }
    }
    if(arr[n-1]==0)
        cout<<maxx<<endl;
    else
    {
        i=0;
        while(arr[i++])
        {
            c++;
        }
        if(c>maxx)
            maxx=c;
        cout<<maxx<<endl;;
    }
    return 0;
}
