#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,flag=0;
    string arr;
    cin>>arr;
    for(i=1;i<arr.size();i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        if(arr[0]>='a' && arr[0]<='z')
        {
            transform(arr.begin(),arr.end(),arr.begin(),::tolower);
            arr[0]-=32;
        }
        else
            transform(arr.begin(),arr.end(),arr.begin(),::tolower);
    }
    cout<<arr<<endl;
    return 0;
}
