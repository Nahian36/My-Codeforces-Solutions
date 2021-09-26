#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    int n,a,b,i,flag,c;
    cin>>n;
    while(n--)
    {
        c=0;
        a=0;
        b=0;
        flag=-2;
        cin>>arr;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]=='1')
            {
                if(flag==-2)
                {
                    a=i;
                    flag=1;
                }
                b=i;
            }
        }
        for(i=a+1;i<b;i++)
        {
            if(arr[i]=='0')
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
