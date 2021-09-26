#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int i,j,k,c=0,l;
    l=arr.size();
    for(i=0;i<l-2;i++)
    {
        if(arr[i]=='Q')
        {
            for(j=i;j<l-1;j++)
            {
                if(arr[j]=='A')
                {
                    for(k=j;k<l;k++)
                    {
                        if(arr[k]=='Q')
                            c++;
                    }
                }
            }
        }
    }
    cout<<c;
    return 0;
}
