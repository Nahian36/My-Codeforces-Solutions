#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,j,c=0,s=0;
    cin>>n>>a>>b;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=a)
            c++;
        else
            c=0;
        if(c==b)
        {
            s++;
            c--;
        }
    }
    cout<<s<<endl;
    return 0;
}
