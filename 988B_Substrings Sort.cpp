#include<bits/stdc++.h>
using namespace std;
#include <cstdlib>

int main()
{
    int n,i,j,l,flag=0;
    cin>>n;
    string arr[n],temp;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i].size()>arr[j].size())
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(strstr(arr[i+1].c_str(),arr[i].c_str()))
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
