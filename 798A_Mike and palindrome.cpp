#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int i=0,c=0;
    while(i<arr.size()/2)
    {
        if(arr[i]!=arr[arr.size()-i-1])
            c++;
        i++;
    }
    if(c==0)
    {
        if(arr.size()%2==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
