#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,flag=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    i=0;
    while(n>=i+3)
    {
        if(arr[n-i-1]<arr[n-i-2]+arr[n-i-3])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
