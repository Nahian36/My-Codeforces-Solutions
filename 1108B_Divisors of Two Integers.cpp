#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int arr[n], brr[n], boss[n];
    for(i=0;i<n;i++)
    {
        cin>>boss[i];
    }
    sort(boss, boss+n);
    i=0;
    arr[i]=boss[n-1];
    for(j=n-2;j>=0;j--)
    {
        if(arr[0]%boss[j]==0 && arr[i]!=boss[j])
        {
            arr[++i]=boss[j];
        }
        else
        {
            brr[0]=boss[j];
            break;
        }
    }
    cout<<arr[0]<<" "<<brr[0]<<endl;
    return 0;
}
