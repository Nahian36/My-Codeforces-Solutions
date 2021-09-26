#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int l,i,c=0,flag=0;
    l=arr.size();
    if(l%2==0)
        cout<<l/2<<endl;
    else
    {
        for(i=1;i<l;i++)
        {
            if(arr[i]==49)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<(l/2)+1<<endl;
        else
            cout<<l/2<<endl;
    }
    return 0;
}
