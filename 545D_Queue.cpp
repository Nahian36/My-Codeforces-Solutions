#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,c1=0;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(c1<=arr[i])
        {
            c++;
            c1+=arr[i];
        }

    }
    cout<<c;
    return 0;
}
