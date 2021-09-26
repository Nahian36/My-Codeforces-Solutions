#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,q,y;
    cin>>n>>m;
    string arr[n], brr[m];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>y;
        cout<<arr[(y-1)%n]+brr[(y-1)%m]<<endl;
    }
    return 0;
}
