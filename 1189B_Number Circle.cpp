#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,flag=1;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    swap(arr[n-1],arr[n-2]);
    if((arr[0]<arr[n-1]+arr[1]) && (arr[n-1]<arr[n-2]+arr[0]))
    {
        for(i=1;i<n-1;i++)
        {
            if(arr[i]<arr[i-1]+arr[i+1])
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
