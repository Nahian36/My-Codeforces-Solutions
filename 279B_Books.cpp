#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j=0,a,c=0,maxx=-2,t;
    cin>>n>>a;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=a)
        {
            c++;
            a-=arr[i];
        }
        else
        {
            a+=arr[j];
            a-=arr[i];
            j++;
        }
        if(c>maxx)
            maxx=c;
    }
    cout<<maxx<<endl;
    return 0;
}
