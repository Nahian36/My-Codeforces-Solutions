#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,arr[28],brr[28],flag;
    cin>>n;
    string a,b;
    while(n--)
    {
        flag=0;
        for(i=0;i<26;i++)
        {
            arr[i]=0;
            brr[i]=0;
        }
        cin>>a>>b;
        if(a==b)
            cout<<"YES"<<endl;
        else
        {
            for(i=0;i<a.size();i++)
            {
                arr[a[i]-97]=1;
                brr[b[i]-97]=1;
            }
            for(i=0;i<26;i++)
            {
                if(arr[i]==1 && brr[i]==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
