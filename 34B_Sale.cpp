#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, sum=0;
    cin>>n>>m;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(i=0;i<m;i++)
    {
        if(arr[i]<0)
            sum+=arr[i];
        else
            break;
    }
    if(sum<0)
        cout<<-sum;
    else
        cout<<0;
    return 0;
}
