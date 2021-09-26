#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=1;i<n-1;i++)
    {
        if(arr[i]>arr[0] && arr[i]<arr[n-1])
            c++;
    }
    cout<<c<<endl;
    return 0;
}
