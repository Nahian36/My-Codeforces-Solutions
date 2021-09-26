#include<bits/stdc++.h>
using namespace std;

map<long long int, long long int>mp;

int main()
{
    long long int arr[100005],n,i,a,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    arr[0]=mp[0];
    arr[1]=mp[1];
    for(i=2;i<=100000;i++)
    {
        x=arr[i-1];//i k jodi choose kora na hoy, taile i er ager value tai consider kora hobe
        y=i*mp[i];//points of i
        z=y+arr[i-2];//i k jodi consider kora hoy, taile er sthe i er prev->prev er value tao consider kora hobe  
        arr[i]=max(x,z);//i er ta skip korle r na korle, greater jeita ashbe oitai assign korbe
    }
    cout<<arr[100000]<<endl;//add hotey hotey last value arr er tei maximum points thakbe
    return 0;
}