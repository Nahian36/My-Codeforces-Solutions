#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int n,i,brr[27],maxx=-2,res=0;
    cin>>n;
    for(i=0;i<26;i++)
    {
        cin>>brr[i];
        if(brr[i]>maxx)
            maxx=brr[i];
    }
    for(i=0;i<arr.size();i++)
    {
        res+=(i+1)*brr[arr[i]-97];
    }
    for(i=arr.size();i<arr.size()+n;i++)
    {
        res+=(i+1)*maxx;
    }
    cout<<res<<endl;
    return 0;
}
